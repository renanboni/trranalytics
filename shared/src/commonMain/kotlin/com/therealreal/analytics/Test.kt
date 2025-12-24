package com.therealreal.analytics

import analytics.events.Purchase
import com.therealreal.analytics.events.propertiesMap

fun main() {
    val e = Purchase.V1.RefundRequested(
        amount = 1.0,
        orderId = "2",
    ).propertiesMap()
}