package com.therealreal.generator.emit

import com.therealreal.generator.model.EventDef
import com.therealreal.generator.util.indent

class FamilyEmitter(
    private val pkg: String,
    private val familyName: String,
    private val familyEvents: List<EventDef>
) {
    fun emitFamily(): String {
        // Group events by base name (analyticsEventName) and find max version for each
        val maxVersionByEvent = familyEvents
            .groupBy { it.analyticsEventName }
            .mapValues { (_, events) -> events.maxOf { it.schemaVersion } }

        val eventBlocks = familyEvents.sortedBy { it.eventClassName }
            .joinToString("\n\n") { e ->
                val maxVersion = maxVersionByEvent[e.analyticsEventName] ?: e.schemaVersion
                val isDeprecated = e.schemaVersion < maxVersion
                EventEmitter(
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
