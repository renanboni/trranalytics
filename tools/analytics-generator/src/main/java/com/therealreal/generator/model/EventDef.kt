package com.therealreal.generator.model

data class EventDef(
    val familyName: String,         // Seller
    val familyRaw: String,          // seller
    val subFamilyName: String? = null,
    val subFamilyRaw: String? = null,
    val eventClassName: String,     // ConsignmentHomeV1
    val analyticsEventName: String, // Consignment Home
    val schemaVersion: Int,         // 1
    val schemaFilePath: String,
    val root: Type.ObjectT
)
