package com.therealreal.analytics.events

interface AnalyticsEvent {
    val eventName: String
    val schemaVersion: Int
    fun properties(): Map<String, Any?>
    fun payload(): Map<String, Any?>
}
