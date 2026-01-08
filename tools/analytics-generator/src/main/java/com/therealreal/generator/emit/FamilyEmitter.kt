package com.therealreal.generator.emit

import com.therealreal.generator.model.EventDef
import com.therealreal.generator.util.indent

class FamilyEmitter(
    private val pkg: String,
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
            package $pkg

            import com.therealreal.analytics.events.AnalyticsEvent

            /**
             * Generated analytics events for family: $familyName
             */
            sealed interface $familyName : AnalyticsEvent {

            ${indent(versionBlocks, 2).trimEnd()}
            }
        """.trimIndent() + "\n"
    }

    private fun emitVersion(versionInt: Int, versionName: String, events: List<EventDef>): String {
        val eventBlocks = events.sortedBy { it.eventClassName }
            .joinToString("\n\n") { e ->
                EventEmitter(
                    familyName = familyName,
                    versionInt = versionInt,
                    eventClassName = e.eventClassName,
                    analyticsEventName = e.analyticsEventName,
                    schemaFilePath = e.schemaFilePath,
                    root = e.root
                ).emitEvent()
            }

        return """
            object $versionName {
            ${indent(eventBlocks, 2).trimEnd()}
            }
        """.trimIndent()
    }
}
