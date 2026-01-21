package com.therealreal.generator.emit

import com.therealreal.generator.model.EventDef
import com.therealreal.generator.util.indent

class FamilyEmitter(
    private val pkg: String,
    private val familyName: String,
    private val familyEvents: List<EventDef>
) {
    fun emitFamily(): String {
        val eventBlocks = familyEvents.sortedBy { it.eventClassName }
            .joinToString("\n\n") { e ->
                EventEmitter(
                    familyName = familyName,
                    eventClassName = e.eventClassName,
                    analyticsEventName = e.analyticsEventName,
                    schemaFilePath = e.schemaFilePath,
                    root = e.root
                ).emitEvent()
            }

        return """
            package $pkg

            import com.therealreal.analytics.events.AnalyticsEvent

            /**
             * Generated analytics events for family: $familyName
             */
            sealed interface $familyName : AnalyticsEvent {

            ${indent(eventBlocks, 2).trimEnd()}
            }
        """.trimIndent() + "\n"
    }
}
