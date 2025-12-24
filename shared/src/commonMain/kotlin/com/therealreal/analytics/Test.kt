package com.therealreal.analytics

import analytics.events.Purchase

fun main() {
    val e = Purchase.V1.RefundRequested(
        amount = 1.0,
        orderId = "2",
    )

    val payload = e.payload()
}