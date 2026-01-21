package com.therealreal.analytics.events

interface AnalyticsEvent {
    val eventName: String
    fun properties(): Map<String, Any?>
    fun payload(): Map<String, Any?>
}
