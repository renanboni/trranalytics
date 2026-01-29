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

        val directEvents = familyEvents.filter { it.subFamilyName == null }
        val subFamilyEvents = familyEvents.filter { it.subFamilyName != null }
            .groupBy { it.subFamilyName!! }

        val directEventBlocks = directEvents.sortedBy { it.eventClassName }
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

        val subFamilyBlocks = subFamilyEvents.entries.sortedBy { it.key }
            .joinToString("\n\n") { (subFamilyName, events) ->
                val subFamilyEventBlocks = events.sortedBy { it.eventClassName }
                    .joinToString("\n\n") { e ->
                        val maxVersion = maxVersionByEvent[e.analyticsEventName] ?: e.schemaVersion
                        val isDeprecated = e.schemaVersion < maxVersion
                        EventEmitter(
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
sealed interface $subFamilyName : $familyName {

${indent(subFamilyEventBlocks, 2).trimEnd()}
}
                """.trimIndent().trim()
            }

        val allBlocks = listOf(directEventBlocks, subFamilyBlocks)
            .filter { it.isNotBlank() }
            .joinToString("\n\n")

        return """
            package $pkg

            import com.therealreal.analytics.events.AnalyticsEvent

            /**
             * Generated analytics events for family: $familyName
             */
            sealed interface $familyName : AnalyticsEvent {

            ${indent(allBlocks, 2).trimEnd()}
            }
        """.trimIndent() + "\n"
    }
}
