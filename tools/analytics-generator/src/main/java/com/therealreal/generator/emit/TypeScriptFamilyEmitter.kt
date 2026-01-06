package com.therealreal.generator.emit

import com.therealreal.generator.model.EventDef
import com.therealreal.generator.util.indent

class TypeScriptFamilyEmitter(
    private val familyName: String,
    private val familyEvents: List<EventDef>
) {
    fun emitFamily(): String {
        val byVersion = familyEvents.groupBy { it.versionInt }.toSortedMap()

        val versionBlocks = byVersion.values.joinToString("\n\n") { eventsInVersion ->
            val vInt = eventsInVersion.first().versionInt
            val vName = eventsInVersion.first().versionName
            emitVersion(vInt, vName, eventsInVersion)
        }

        return """
import { AnalyticsEvent } from './AnalyticsEvent';

/**
 * Generated analytics events for family: $familyName
 */
export interface $familyName extends AnalyticsEvent {}

export namespace $familyName {
${indent(versionBlocks, 2)}
}
        """.trimIndent().trim() + "\n"
    }

    private fun emitVersion(versionInt: Int, versionName: String, events: List<EventDef>): String {
        val eventBlocks = events.sortedBy { it.eventClassName }
            .joinToString("\n\n") { e ->
                TypeScriptEventEmitter(
                    familyName = familyName,
                    versionInt = versionInt,
                    eventClassName = e.eventClassName,
                    analyticsEventName = e.analyticsEventName,
                    schemaFilePath = e.schemaFilePath,
                    root = e.root
                ).emitEvent()
            }

        return """
export namespace $versionName {
${indent(eventBlocks, 2)}
}
        """.trimIndent().trim()
    }

    companion object {
        fun emitBaseInterface(): String {
            return """
/**
 * Base interface for all analytics events
 */
export interface AnalyticsEvent {
  readonly eventName: string;
  readonly schemaVersion: number;
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
