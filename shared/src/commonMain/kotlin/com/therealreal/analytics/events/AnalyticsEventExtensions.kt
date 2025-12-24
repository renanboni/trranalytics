package com.therealreal.analytics.events

import kotlinx.serialization.json.*

/**
 * Converts JsonObject to a Map<String, Any?>.
 * On iOS: exposed as [String: AnyHashable] in Swift
 * On Android: used as Map<String, Any>
 */
fun JsonObject.toMap(): Map<String, Any?> {
    return mapValues { (_, value) -> value.toNativeValue() }
}

/**
 * Converts JsonElement to native types.
 */
private fun JsonElement.toNativeValue(): Any? {
    return when (this) {
        is JsonObject -> toMap()
        is JsonArray -> map { it.toNativeValue() }
        is JsonPrimitive -> {
            when {
                isString -> content
                this is JsonNull -> null
                else -> {
                    // Try to parse as number or boolean
                    content.toLongOrNull()
                        ?: content.toDoubleOrNull()
                        ?: content.toBooleanStrictOrNull()
                        ?: content
                }
            }
        }
    }
}

/**
 * Extension function for AnalyticsEvent to get properties as a native Map.
 * Returns Map<String, Any?> suitable for platform-specific analytics calls.
 */
fun AnalyticsEvent.propertiesMap(): Map<String, Any?> {
    return properties().toMap()
}

/**
 * Extension function for AnalyticsEvent to get full payload as a native Map.
 */
fun AnalyticsEvent.payloadMap(): Map<String, Any?> {
    return payload().toMap()
}