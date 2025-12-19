package com.therealreal.analytics.events

import kotlinx.serialization.json.JsonObject

interface AnalyticsEvent {
    val eventName: String
    val schemaVersion: Int
    fun properties(): JsonObject
    fun payload(): JsonObject
}
