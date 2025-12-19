package com.therealreal.generator.model

data class EventDef(
    val familyName: String,         // Purchase
    val familyRaw: String,          // purchase
    val versionInt: Int,            // 1
    val versionName: String,        // V1
    val eventClassName: String,     // ReturnItem
    val analyticsEventName: String, // purchase_return_item
    val schemaFilePath: String,
    val root: Type.ObjectT
)
