package com.therealreal.generator.validation

import com.therealreal.generator.validation.ValidationIssue.Severity.ERROR
import com.therealreal.generator.validation.ValidationIssue.Severity.WARNING
import kotlinx.serialization.json.*
import java.nio.file.Path
import kotlin.io.path.readText

class SchemaValidator {

    private val supportedTypes = setOf("string", "number", "integer", "boolean", "object", "array", "null")
    private val unsupportedKeywords = setOf("\$ref", "oneOf", "anyOf", "allOf", "\$id", "\$schema", "definitions", "\$defs")

    fun validate(schemaFile: Path): ValidationResult {
        val issues = mutableListOf<ValidationIssue>()

        // Validate path structure
        validatePathStructure(schemaFile, issues)

        // Parse JSON
        val jsonContent = try {
            schemaFile.readText()
        } catch (e: Exception) {
            issues.add(ValidationIssue(schemaFile, "file", "Cannot read file: ${e.message}", ERROR))
            return ValidationResult(issues)
        }

        val rootObj = try {
            Json.parseToJsonElement(jsonContent).jsonObject
        } catch (e: Exception) {
            issues.add(ValidationIssue(schemaFile, "root", "Invalid JSON: ${e.message}", ERROR))
            return ValidationResult(issues)
        }

        // Validate schema content
        validateNode(rootObj, schemaFile, "root", issues, isRoot = true)

        return ValidationResult(issues)
    }

    fun validateAll(schemaFiles: List<Path>): ValidationResult {
        val allIssues = mutableListOf<ValidationIssue>()
        val eventNames = mutableMapOf<String, Path>()

        for (file in schemaFiles) {
            val result = validate(file)
            allIssues.addAll(result.issues)

            // Check for duplicate event names
            if (result.isValid) {
                val eventName = extractEventName(file)
                if (eventName != null) {
                    val existing = eventNames[eventName]
                    if (existing != null) {
                        allIssues.add(ValidationIssue(
                            file, "root",
                            "Duplicate event name '$eventName' (also in $existing)",
                            ERROR
                        ))
                    } else {
                        eventNames[eventName] = file
                    }
                }
            }
        }

        return ValidationResult(allIssues)
    }

    private fun validatePathStructure(file: Path, issues: MutableList<ValidationIssue>) {
        val normalized = file.normalize().toString().replace('\\', '/')
        val parts = normalized.split('/').filter { it.isNotBlank() }

        if (parts.size < 3) {
            issues.add(ValidationIssue(file, "path", "Schema path must be <family>/<vN>/<event>.json", ERROR))
            return
        }

        val fileName = parts.last()
        val versionFolder = parts[parts.size - 2]
        val familyFolder = parts[parts.size - 3]

        // Validate file name
        if (!fileName.endsWith(".json")) {
            issues.add(ValidationIssue(file, "path", "File must have .json extension", ERROR))
        }

        if (fileName.contains(" ") || fileName.contains("-")) {
            issues.add(ValidationIssue(file, "path", "File name should use underscores, not spaces or hyphens", WARNING))
        }

        if (fileName != fileName.lowercase()) {
            issues.add(ValidationIssue(file, "path", "File name should be lowercase", WARNING))
        }

        // Validate version folder
        if (!versionFolder.matches(Regex("v\\d+"))) {
            issues.add(ValidationIssue(file, "path", "Version folder must be like 'v1', 'v2', etc. Got: '$versionFolder'", ERROR))
        }

        // Validate family folder
        if (familyFolder.contains(" ") || familyFolder.contains("-")) {
            issues.add(ValidationIssue(file, "path", "Family folder should use underscores, not spaces or hyphens", WARNING))
        }

        if (familyFolder != familyFolder.lowercase()) {
            issues.add(ValidationIssue(file, "path", "Family folder should be lowercase", WARNING))
        }
    }

    private fun validateNode(
        node: JsonObject,
        file: Path,
        path: String,
        issues: MutableList<ValidationIssue>,
        isRoot: Boolean = false
    ) {
        // Check for unsupported keywords
        for (keyword in unsupportedKeywords) {
            if (node.containsKey(keyword)) {
                issues.add(ValidationIssue(file, path, "Unsupported keyword '$keyword'", ERROR))
            }
        }

        // Validate type
        val typeElement = node["type"]
        if (typeElement == null) {
            issues.add(ValidationIssue(file, path, "Missing required 'type' field", ERROR))
            return
        }

        val types = when (typeElement) {
            is JsonPrimitive -> listOf(typeElement.content)
            is JsonArray -> typeElement.map { it.jsonPrimitive.content }
            else -> {
                issues.add(ValidationIssue(file, path, "'type' must be a string or array of strings", ERROR))
                return
            }
        }

        // Validate type values
        for (t in types) {
            if (t !in supportedTypes) {
                issues.add(ValidationIssue(file, path, "Unsupported type '$t'. Supported: $supportedTypes", ERROR))
            }
        }

        val nonNullTypes = types.filter { it != "null" }
        if (nonNullTypes.isEmpty()) {
            issues.add(ValidationIssue(file, path, "Type must have at least one non-null type", ERROR))
            return
        }
        if (nonNullTypes.size > 1) {
            issues.add(ValidationIssue(file, path, "Multiple non-null types not supported: $nonNullTypes", ERROR))
            return
        }

        val primaryType = nonNullTypes.first()

        // Root must be object
        if (isRoot && primaryType != "object") {
            issues.add(ValidationIssue(file, path, "Root type must be 'object', got '$primaryType'", ERROR))
        }

        // Type-specific validation
        when (primaryType) {
            "object" -> validateObject(node, file, path, issues)
            "array" -> validateArray(node, file, path, issues)
            "string" -> validateString(node, file, path, issues)
        }
    }

    private fun validateObject(node: JsonObject, file: Path, path: String, issues: MutableList<ValidationIssue>) {
        val properties = node["properties"]
        if (properties == null) {
            issues.add(ValidationIssue(file, path, "Object must have 'properties' field", ERROR))
            return
        }

        val propsObj = try {
            properties.jsonObject
        } catch (e: Exception) {
            issues.add(ValidationIssue(file, path, "'properties' must be an object", ERROR))
            return
        }

        if (propsObj.isEmpty()) {
            issues.add(ValidationIssue(file, path, "'properties' should not be empty", WARNING))
        }

        // Validate additionalProperties
        val additionalProps = node["additionalProperties"]
        if (additionalProps == null) {
            issues.add(ValidationIssue(file, path, "Missing 'additionalProperties: false' (recommended for analytics stability)", WARNING))
        } else {
            val value = (additionalProps as? JsonPrimitive)?.booleanOrNull
            if (value != false) {
                issues.add(ValidationIssue(file, path, "'additionalProperties' should be false for analytics stability", WARNING))
            }
        }

        // Validate required array
        val required = node["required"]
        val requiredSet = if (required != null) {
            try {
                required.jsonArray.map { it.jsonPrimitive.content }.toSet()
            } catch (e: Exception) {
                issues.add(ValidationIssue(file, path, "'required' must be an array of strings", ERROR))
                emptySet()
            }
        } else {
            emptySet<String>()
        }

        // Check required fields exist in properties
        val missingRequired = requiredSet - propsObj.keys
        if (missingRequired.isNotEmpty()) {
            issues.add(ValidationIssue(file, path, "Required fields not in properties: $missingRequired", ERROR))
        }

        // Validate each property
        for ((propName, propValue) in propsObj) {
            val propPath = "$path.properties.$propName"

            // Validate property name
            if (propName.contains(" ")) {
                issues.add(ValidationIssue(file, propPath, "Property name should not contain spaces", ERROR))
            }

            val propObj = try {
                propValue.jsonObject
            } catch (e: Exception) {
                issues.add(ValidationIssue(file, propPath, "Property definition must be an object", ERROR))
                continue
            }

            validateNode(propObj, file, propPath, issues)
        }
    }

    private fun validateArray(node: JsonObject, file: Path, path: String, issues: MutableList<ValidationIssue>) {
        val items = node["items"]
        if (items == null) {
            issues.add(ValidationIssue(file, path, "Array must have 'items' field", ERROR))
            return
        }

        val itemsObj = try {
            items.jsonObject
        } catch (e: Exception) {
            issues.add(ValidationIssue(file, path, "'items' must be an object", ERROR))
            return
        }

        // Check for nested arrays
        val itemType = itemsObj["type"]
        if (itemType != null) {
            val itemTypes = when (itemType) {
                is JsonPrimitive -> listOf(itemType.content)
                is JsonArray -> itemType.map { it.jsonPrimitive.content }
                else -> emptyList()
            }
            if ("array" in itemTypes) {
                issues.add(ValidationIssue(file, path, "Nested arrays (array of array) not supported", ERROR))
            }
        }

        validateNode(itemsObj, file, "$path.items", issues)
    }

    private fun validateString(node: JsonObject, file: Path, path: String, issues: MutableList<ValidationIssue>) {
        val enumValues = node["enum"]
        if (enumValues != null) {
            val values = try {
                enumValues.jsonArray.map { it.jsonPrimitive.content }
            } catch (e: Exception) {
                issues.add(ValidationIssue(file, path, "'enum' must be an array of strings", ERROR))
                return
            }

            if (values.isEmpty()) {
                issues.add(ValidationIssue(file, path, "'enum' should not be empty", ERROR))
            }

            // Check for duplicate enum values
            val duplicates = values.groupBy { it }.filter { it.value.size > 1 }.keys
            if (duplicates.isNotEmpty()) {
                issues.add(ValidationIssue(file, path, "Duplicate enum values: $duplicates", ERROR))
            }

            // Check for empty enum values
            if (values.any { it.isBlank() }) {
                issues.add(ValidationIssue(file, path, "Enum values should not be blank", WARNING))
            }
        }
    }

    private fun extractEventName(file: Path): String? {
        return try {
            val json = Json.parseToJsonElement(file.readText()).jsonObject
            (json["x-eventName"] as? JsonPrimitive)?.contentOrNull
                ?: (json["title"] as? JsonPrimitive)?.contentOrNull
                ?: file.fileName.toString().removeSuffix(".json")
        } catch (e: Exception) {
            null
        }
    }
}
