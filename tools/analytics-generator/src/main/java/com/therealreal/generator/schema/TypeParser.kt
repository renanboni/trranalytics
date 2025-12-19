package com.therealreal.generator.schema

import com.therealreal.generator.model.Field
import com.therealreal.generator.model.ParsePath
import com.therealreal.generator.model.Type
import com.therealreal.generator.util.singularize
import com.therealreal.generator.util.toPascalCase
import kotlinx.serialization.json.JsonArray
import kotlinx.serialization.json.JsonElement
import kotlinx.serialization.json.JsonObject
import kotlinx.serialization.json.JsonPrimitive
import kotlinx.serialization.json.jsonArray
import kotlinx.serialization.json.jsonObject
import kotlinx.serialization.json.jsonPrimitive
import java.nio.file.Path

class TypeParser {

    fun parse(
        schemaNode: JsonObject,
        suggestedName: String,
        file: Path,
        path: ParsePath,
        names: NameRegistry
    ): Type {
        schemaNode.hasUnsupportedKeywords()?.let { kw ->
            throw SchemaParseException("Unsupported $kw", file, path.describe())
        }

        val (primaryType, nullable) = parsePrimaryType(schemaNode["type"], file, path)

        val enumValues = schemaNode["enum"]?.let {
            runCatching { it.jsonArray.map { v -> v.jsonPrimitive.content } }.getOrNull()
        } ?: emptyList()

        return when (primaryType) {
            "string" -> {
                if (enumValues.isNotEmpty()) {
                    val base = when (path) {
                        is ParsePath.Property -> path.propName.toPascalCase().singularize()
                        is ParsePath.ArrayItems -> path.arrayPropName.toPascalCase().singularize()
                        ParsePath.Root -> suggestedName.toPascalCase()
                    }
                    val enumName = names.unique(base)
                    Type.EnumStringT(name = enumName, values = enumValues, nullable = nullable)
                } else {
                    Type.StringT(nullable)
                }
            }

            "number" -> Type.NumberT(nullable)
            "integer" -> Type.IntegerT(nullable)
            "boolean" -> Type.BooleanT(nullable)

            "object" -> parseObject(schemaNode, suggestedName, file, path, names, nullable)

            "array" -> parseArray(schemaNode, suggestedName, file, path, names, nullable)

            else -> throw SchemaParseException("Unsupported type '$primaryType'", file, path.describe())
        }
    }

    private fun parseObject(
        schemaNode: JsonObject,
        suggestedName: String,
        file: Path,
        path: ParsePath,
        names: NameRegistry,
        nullable: Boolean
    ): Type.ObjectT {
        val props = schemaNode["properties"]?.jsonObject
            ?: throw SchemaParseException("Object must have 'properties'", file, path.describe())

        val requiredSet = schemaNode["required"]
            ?.let { runCatching { it.jsonArray.map { x -> x.jsonPrimitive.content }.toSet() }.getOrNull() }
            ?: emptySet()

        val missingRequired = requiredSet - props.keys
        if (missingRequired.isNotEmpty()) {
            throw SchemaParseException(
                "Required fields missing from properties: $missingRequired",
                file,
                path.describe()
            )
        }

        val baseName = when (path) {
            is ParsePath.Property -> path.propName.toPascalCase().singularize()
            is ParsePath.ArrayItems -> path.arrayPropName.toPascalCase().singularize() + "Item"
            ParsePath.Root -> suggestedName.toPascalCase()
        }
        val objectName = names.unique(baseName)

        val fields = props.map { (propName, propSchemaEl) ->
            val propSchema = propSchemaEl.jsonObject
            val childType = parse(
                schemaNode = propSchema,
                suggestedName = objectName + propName.toPascalCase(),
                file = file,
                path = ParsePath.Property(propName),
                names = names
            )
            Field(
                name = propName,
                type = childType,
                required = propName in requiredSet
            )
        }.sortedBy { it.name }

        return Type.ObjectT(name = objectName, fields = fields, nullable = nullable)
    }

    private fun parseArray(
        schemaNode: JsonObject,
        suggestedName: String,
        file: Path,
        path: ParsePath,
        names: NameRegistry,
        nullable: Boolean
    ): Type.ArrayT {
        val itemsNode = schemaNode["items"]?.jsonObject
            ?: throw SchemaParseException("Array must have 'items'", file, path.describe())

        val arrayPropName = when (path) {
            is ParsePath.Property -> path.propName
            is ParsePath.ArrayItems -> path.arrayPropName
            ParsePath.Root -> throw SchemaParseException("Top-level arrays not supported; root must be object", file, path.describe())
        }

        val itemSuggested = arrayPropName.toPascalCase().singularize() + "Item"

        val itemType = parse(
            schemaNode = itemsNode,
            suggestedName = itemSuggested,
            file = file,
            path = ParsePath.ArrayItems(arrayPropName),
            names = names
        )

        if (itemType is Type.ArrayT) {
            throw SchemaParseException("Nested arrays (array of array) not supported", file, path.describe())
        }

        return Type.ArrayT(itemType = itemType, nullable = nullable)
    }

    private fun parsePrimaryType(typeNode: JsonElement?, file: Path, path: ParsePath): Pair<String, Boolean> {
        if (typeNode == null) throw SchemaParseException("Missing 'type'", file, path.describe())

        val types: Set<String> = when (typeNode) {
            is JsonPrimitive -> setOf(typeNode.content)
            is JsonArray -> typeNode.map { it.jsonPrimitive.content }.toSet()
            else -> throw SchemaParseException("Invalid 'type' (must be string or array)", file, path.describe())
        }

        val nullable = "null" in types
        val nonNull = types - "null"
        val primary = nonNull.singleOrNull()
            ?: throw SchemaParseException("Type must have exactly one non-null type. Got: $types", file, path.describe())

        return primary to nullable
    }
}
