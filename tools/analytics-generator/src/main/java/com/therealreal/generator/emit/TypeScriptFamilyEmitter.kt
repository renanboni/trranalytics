package com.therealreal.generator.emit

import com.therealreal.generator.model.EventDef
import com.therealreal.generator.util.indent

class TypeScriptFamilyEmitter(
    private val familyName: String,
    private val familyEvents: List<EventDef>
) {
    fun emitFamily(): String {
        // Group events by base name (analyticsEventName) and find max version for each
        val maxVersionByEvent = familyEvents
            .groupBy { it.analyticsEventName }
            .mapValues { (_, events) -> events.maxOf { it.schemaVersion } }

        // Separate direct events from sub-family events
        val directEvents = familyEvents.filter { it.subFamilyName == null }
        val subFamilyEvents = familyEvents.filter { it.subFamilyName != null }
            .groupBy { it.subFamilyName!! }

        // Emit direct events
        val directEventBlocks = directEvents.sortedBy { it.eventClassName }
            .joinToString("\n\n") { e ->
                val maxVersion = maxVersionByEvent[e.analyticsEventName] ?: e.schemaVersion
                val isDeprecated = e.schemaVersion < maxVersion
                TypeScriptEventEmitter(
                    familyName = familyName,
                    eventClassName = e.eventClassName,
                    analyticsEventName = e.analyticsEventName,
                    schemaVersion = e.schemaVersion,
                    schemaFilePath = e.schemaFilePath,
                    root = e.root,
                    isDeprecated = isDeprecated,
                    latestVersion = maxVersion
                ).emitEvent()
            }

        // Emit sub-family namespaces
        val subFamilyBlocks = subFamilyEvents.entries.sortedBy { it.key }
            .joinToString("\n\n") { (subFamilyName, events) ->
                val subFamilyEventBlocks = events.sortedBy { it.eventClassName }
                    .joinToString("\n\n") { e ->
                        val maxVersion = maxVersionByEvent[e.analyticsEventName] ?: e.schemaVersion
                        val isDeprecated = e.schemaVersion < maxVersion
                        TypeScriptEventEmitter(
                            familyName = subFamilyName,
                            eventClassName = e.eventClassName,
                            analyticsEventName = e.analyticsEventName,
                            schemaVersion = e.schemaVersion,
                            schemaFilePath = e.schemaFilePath,
                            root = e.root,
                            isDeprecated = isDeprecated,
                            latestVersion = maxVersion
                        ).emitEvent()
                    }

                """
export interface $subFamilyName extends $familyName {}

export namespace $subFamilyName {
${indent(subFamilyEventBlocks, 2)}
}
                """.trimIndent().trim()
            }

        val allBlocks = listOf(directEventBlocks, subFamilyBlocks)
            .filter { it.isNotBlank() }
            .joinToString("\n\n")

        return """
import { AnalyticsEvent } from './AnalyticsEvent';

/**
 * Generated analytics events for family: $familyName
 */
export interface $familyName extends AnalyticsEvent {}

export namespace $familyName {
${indent(allBlocks, 2)}
}
        """.trimIndent().trim() + "\n"
    }

    companion object {
        fun emitBaseInterface(): String {
            return """
/**
 * Base interface for all analytics events
 */
export interface AnalyticsEvent {
  readonly event_name: string;
}
            """.trimIndent().trim() + "\n"
        }

        fun emitIndex(familyNames: List<String>): String {
            val exports = familyNames.sorted().joinToString("\n") { family ->
                "export * from './$family';"
            }

            return """
export * from './AnalyticsEvent';
$exports
            """.trimIndent().trim() + "\n"
        }
    }
}
