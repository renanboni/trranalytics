package com.therealreal.generator.schema

import com.therealreal.generator.model.Field
import com.therealreal.generator.model.Type
import kotlinx.serialization.json.Json
import kotlinx.serialization.json.JsonArray
import kotlinx.serialization.json.JsonPrimitive
import kotlinx.serialization.json.jsonObject
import kotlinx.serialization.json.jsonPrimitive
import java.nio.file.Path
import kotlin.io.path.readText

class CommonFieldsLoader(private val json: Json) {

    fun load(commonSchemaPath: Path): List<Field> {
        val rootObj = json.parseToJsonElement(commonSchemaPath.readText()).jsonObject
        val propsObj = rootObj["properties"]?.jsonObject ?: return emptyList()

        return propsObj.map { (propName, propSchemaEl) ->
            val propSchema = propSchemaEl.jsonObject
            val type = parseSimpleType(propSchema)
            Field(
                name = propName,
                type = type,
                required = false
            )
        }.sortedBy { it.name }
    }

    private fun parseSimpleType(schema: kotlinx.serialization.json.JsonObject): Type {
        val typeNode = schema["type"]
            ?: throw IllegalArgumentException("Common field missing 'type'")

        val (primaryType, nullable) = when (typeNode) {
            is JsonPrimitive -> typeNode.content to false
            is JsonArray -> {
                val types = typeNode.map { it.jsonPrimitive.content }.toSet()
                val isNullable = "null" in types
                val nonNull = types - "null"
                val primary = nonNull.singleOrNull()
                    ?: throw IllegalArgumentException("Common field type must have exactly one non-null type")
                primary to isNullable
            }
            else -> throw IllegalArgumentException("Invalid 'type' in common field")
        }

        return when (primaryType) {
            "string" -> Type.StringT(nullable)
            "number" -> Type.NumberT(nullable)
            "integer" -> Type.IntegerT(nullable)
            "boolean" -> Type.BooleanT(nullable)
            else -> throw IllegalArgumentException("Unsupported common field type: $primaryType")
        }
    }
}