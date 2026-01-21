package com.therealreal.generator.model

data class EventDef(
    val familyName: String,         // Seller
    val familyRaw: String,          // seller
    val eventClassName: String,     // ConsignmentHome
    val analyticsEventName: String, // Consignment Home
    val schemaFilePath: String,
    val root: Type.ObjectT
)
