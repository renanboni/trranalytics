package com.therealreal.analytics.events

import kotlinx.serialization.json.*

/**
 * Converts JsonObject to a native iOS-friendly Map<Any?, Any?>.
 * In Swift, this will be exposed as [AnyHashable: Any].
 */
fun JsonObject.toNativeMap(): Map<Any?, Any?> {
    return mapValues { (_, value) -> value.toNativeValue() }
}

/**
 * Converts JsonElement to native types for iOS interop.
 */
private fun JsonElement.toNativeValue(): Any? {
    return when (this) {
        is JsonObject -> toNativeMap()
        is JsonArray -> map { it.toNativeValue() }
        is JsonPrimitive -> {
            when {
                isString -> content
                this is JsonNull -> null
                else -> {
                    // Try to parse as number
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
 * Extension function for AnalyticsEvent to get properties as native iOS Map.
 * In Swift: event.propertiesMap() returns [AnyHashable: Any]
 */
fun AnalyticsEvent.propertiesMap(): Map<Any?, Any?> {
    return properties().toNativeMap()
}

/**
 * Extension function for AnalyticsEvent to get full payload as native iOS Map.
 * In Swift: event.payloadMap() returns [AnyHashable: Any]
 */
fun AnalyticsEvent.payloadMap(): Map<Any?, Any?> {
    return payload().toNativeMap()
}