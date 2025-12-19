package com.therealreal.generator.schema

import kotlinx.serialization.json.JsonArray
import kotlinx.serialization.json.JsonObject
import kotlinx.serialization.json.JsonPrimitive
import kotlinx.serialization.json.booleanOrNull
import kotlinx.serialization.json.contentOrNull
import kotlinx.serialization.json.jsonArray
import kotlinx.serialization.json.jsonObject

internal fun JsonObject.stringOrNull(key: String): String? =
    (this[key] as? JsonPrimitive)?.contentOrNull

internal fun JsonObject.booleanOrNull(key: String): Boolean? =
    (this[key] as? JsonPrimitive)?.booleanOrNull

internal fun JsonObject.objOrNull(key: String): JsonObject? =
    this[key]?.let { (it as? JsonObject) ?: runCatching { it.jsonObject }.getOrNull() }

internal fun JsonObject.arrayOrNull(key: String): JsonArray? =
    runCatching { this[key]?.jsonArray }.getOrNull()

internal fun JsonObject.hasUnsupportedKeywords(): String? {
    if (containsKey("\$ref")) return "\$ref"
    if (containsKey("oneOf")) return "oneOf"
    if (containsKey("anyOf")) return "anyOf"
    if (containsKey("allOf")) return "allOf"
    return null
}
