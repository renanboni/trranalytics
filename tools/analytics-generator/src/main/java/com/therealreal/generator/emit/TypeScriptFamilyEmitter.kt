package com.therealreal.generator.emit

import com.therealreal.generator.model.EventDef
import com.therealreal.generator.util.indent

class TypeScriptFamilyEmitter(
    private val familyName: String,
    private val familyEvents: List<EventDef>
) {
    fun emitFamily(): String {
        val eventBlocks = familyEvents.sortedBy { it.eventClassName }
            .joinToString("\n\n") { e ->
                TypeScriptEventEmitter(
                    familyName = familyName,
                    eventClassName = e.eventClassName,
                    analyticsEventName = e.analyticsEventName,
                    schemaFilePath = e.schemaFilePath,
                    root = e.root
                ).emitEvent()
            }

        return """
import { AnalyticsEvent } from './AnalyticsEvent';

/**
 * Generated analytics events for family: $familyName
 */
export interface $familyName extends AnalyticsEvent {}

export namespace $familyName {
${indent(eventBlocks, 2)}
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
  readonly eventName: string;
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
