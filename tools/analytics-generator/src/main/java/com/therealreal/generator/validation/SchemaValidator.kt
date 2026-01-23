package com.therealreal.generator.validation

import com.therealreal.generator.validation.ValidationIssue.Severity.ERROR
import com.therealreal.generator.validation.ValidationIssue.Severity.WARNING
import kotlinx.serialization.json.*
import java.nio.file.Path
import kotlin.io.path.readText

class SchemaValidator {

    private val supportedTypes =
        setOf("string", "number", "integer", "boolean", "object", "array", "map", "null")
    private val unsupportedKeywords =
        setOf("\$ref", "oneOf", "anyOf", "allOf", "\$id", "\$schema", "definitions", "\$defs")
    private val snakeCaseRegex = Regex("^[a-z][a-z0-9]*(_[a-z0-9]+)*$")
    private val versionRegex = Regex("^v(\\d+)$")

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

        // Validate eventName if present
        val eventName = (rootObj["eventName"] as? JsonPrimitive)?.contentOrNull
        if (eventName != null && !snakeCaseRegex.matches(eventName)) {
            issues.add(
                ValidationIssue(
                    schemaFile, "eventName",
                    "Event name '$eventName' must be snake_case (e.g., 'lead_form_viewed')",
                    ERROR
                )
            )
        }

        // Validate schema content
        validateNode(rootObj, schemaFile, "root", issues, isRoot = true)

        return ValidationResult(issues)
    }

    fun validateAll(schemaFiles: List<Path>): ValidationResult {
        val allIssues = mutableListOf<ValidationIssue>()
        // Key: eventName, Value: Map of eventFolder to first file seen
        val eventNamesByFolder = mutableMapOf<String, MutableMap<String, Path>>()

        for (file in schemaFiles) {
            val result = validate(file)
            allIssues.addAll(result.issues)

            // Check for duplicate event names across different event folders
            if (result.isValid) {
                val eventName = extractEventName(file)
                val eventFolder = extractEventFolder(file)
                if (eventName != null && eventFolder != null) {
                    val foldersForEvent = eventNamesByFolder.getOrPut(eventName) { mutableMapOf() }
                    val existingFolder = foldersForEvent.keys.firstOrNull { it != eventFolder }
                    if (existingFolder != null) {
                        // Same eventName in a different event folder is an error
                        allIssues.add(
                            ValidationIssue(
                                file, "root",
                                "Duplicate event name '$eventName' (also in ${foldersForEvent[existingFolder]})",
                                ERROR
                            )
                        )
                    } else if (!foldersForEvent.containsKey(eventFolder)) {
                        // First time seeing this eventName in this folder
                        foldersForEvent[eventFolder] = file
                    }
                    // Same eventName in same folder (different versions) is allowed
                }
            }
        }

        return ValidationResult(allIssues)
    }

    private fun extractEventFolder(file: Path): String? {
        val normalized = file.normalize().toString().replace('\\', '/')
        val parts = normalized.split('/').filter { it.isNotBlank() }
        // Expected: .../<family>/<event>/<vN>.json
        return if (parts.size >= 2) parts[parts.size - 2] else null
    }

    private fun validatePathStructure(file: Path, issues: MutableList<ValidationIssue>) {
        val normalized = file.normalize().toString().replace('\\', '/')
        val parts = normalized.split('/').filter { it.isNotBlank() }

        if (parts.size < 3) {
            issues.add(
                ValidationIssue(
                    file,
                    "path",
                    "Schema path must be <family>/<event>/<vN>.json",
                    ERROR
                )
            )
            return
        }

        val fileName = parts.last()
        val eventFolder = parts[parts.size - 2]
        val familyFolder = parts[parts.size - 3]

        // Validate file name
        if (!fileName.endsWith(".json")) {
            issues.add(ValidationIssue(file, "path", "File must have .json extension", ERROR))
        }

        val versionName = fileName.removeSuffix(".json")
        if (!versionRegex.matches(versionName)) {
            issues.add(
                ValidationIssue(
                    file,
                    "path",
                    "File name must be v<N>.json (e.g., v1.json, v2.json), got: $fileName",
                    ERROR
                )
            )
        }

        // Validate event folder
        if (eventFolder.contains(" ") || eventFolder.contains("-")) {
            issues.add(
                ValidationIssue(
                    file,
                    "path",
                    "Event folder should use underscores, not spaces or hyphens",
                    WARNING
                )
            )
        }

        if (eventFolder != eventFolder.lowercase()) {
            issues.add(ValidationIssue(file, "path", "Event folder should be lowercase", WARNING))
        }

        // Validate family folder
        if (familyFolder.contains(" ") || familyFolder.contains("-")) {
            issues.add(
                ValidationIssue(
                    file,
                    "path",
                    "Family folder should use underscores, not spaces or hyphens",
                    WARNING
                )
            )
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
                issues.add(
                    ValidationIssue(
                        file,
                        path,
                        "'type' must be a string or array of strings",
                        ERROR
                    )
                )
                return
            }
        }

        // Validate type values
        for (t in types) {
            if (t !in supportedTypes) {
                issues.add(
                    ValidationIssue(
                        file,
                        path,
                        "Unsupported type '$t'. Supported: $supportedTypes",
                        ERROR
                    )
                )
            }
        }

        val nonNullTypes = types.filter { it != "null" }
        if (nonNullTypes.isEmpty()) {
            issues.add(
                ValidationIssue(
                    file,
                    path,
                    "Type must have at least one non-null type",
                    ERROR
                )
            )
            return
        }
        if (nonNullTypes.size > 1) {
            issues.add(
                ValidationIssue(
                    file,
                    path,
                    "Multiple non-null types not supported: $nonNullTypes",
                    ERROR
                )
            )
            return
        }

        val primaryType = nonNullTypes.first()

        // Root must be object
        if (isRoot && primaryType != "object") {
            issues.add(
                ValidationIssue(
                    file,
                    path,
                    "Root type must be 'object', got '$primaryType'",
                    ERROR
                )
            )
        }

        // Type-specific validation
        when (primaryType) {
            "object" -> validateObject(node, file, path, issues)
            "array" -> validateArray(node, file, path, issues)
            "string" -> validateString(node, file, path, issues)
            "map" -> validateMap(node, file, path, issues)
        }
    }

    private fun validateObject(
        node: JsonObject,
        file: Path,
        path: String,
        issues: MutableList<ValidationIssue>
    ) {
        val properties = node["properties"]
        val additionalProperties = node["additionalProperties"]

        // Check for additionalProperties (Map type)
        if (additionalProperties != null) {
            val additionalPropsObj = try {
                additionalProperties.jsonObject
            } catch (_: Exception) {
                // additionalProperties: true/false is not supported, must be a schema
                issues.add(
                    ValidationIssue(
                        file,
                        path,
                        "'additionalProperties' must be a schema object defining the value type",
                        ERROR
                    )
                )
                return
            }

            if (properties != null) {
                val propsObj = try {
                    properties.jsonObject
                } catch (_: Exception) {
                    null
                }
                if (propsObj != null && propsObj.isNotEmpty()) {
                    issues.add(
                        ValidationIssue(
                            file,
                            path,
                            "Cannot combine non-empty 'properties' with 'additionalProperties'. Use one or the other.",
                            ERROR
                        )
                    )
                    return
                }
            }

            // Validate the additionalProperties schema (value type)
            validateNode(additionalPropsObj, file, "$path.additionalProperties", issues)
            return
        }

        // Regular object with fixed properties
        if (properties == null) {
            issues.add(ValidationIssue(file, path, "Object must have 'properties' or 'additionalProperties' field", ERROR))
            return
        }

        val propsObj = try {
            properties.jsonObject
        } catch (e: Exception) {
            issues.add(ValidationIssue(file, path, "'properties' must be an object", ERROR))
            return
        }

        // Validate required array
        val required = node["required"]
        val requiredSet = if (required != null) {
            try {
                required.jsonArray.map { it.jsonPrimitive.content }.toSet()
            } catch (_: Exception) {
                issues.add(
                    ValidationIssue(
                        file,
                        path,
                        "'required' must be an array of strings",
                        ERROR
                    )
                )
                emptySet()
            }
        } else {
            emptySet()
        }

        // Check required fields exist in properties
        val missingRequired = requiredSet - propsObj.keys
        if (missingRequired.isNotEmpty()) {
            issues.add(
                ValidationIssue(
                    file,
                    path,
                    "Required fields not in properties: $missingRequired",
                    ERROR
                )
            )
        }

        // Validate each property
        for ((propName, propValue) in propsObj) {
            val propPath = "$path.properties.$propName"

            // Validate property name is snake_case
            if (!snakeCaseRegex.matches(propName)) {
                issues.add(
                    ValidationIssue(
                        file, propPath,
                        "Property name '$propName' must be snake_case (e.g., 'user_id', 'first_name')",
                        ERROR
                    )
                )
            }

            val propObj = try {
                propValue.jsonObject
            } catch (_: Exception) {
                issues.add(
                    ValidationIssue(
                        file,
                        propPath,
                        "Property definition must be an object",
                        ERROR
                    )
                )
                continue
            }

            validateNode(propObj, file, propPath, issues)
        }
    }

    private fun validateArray(
        node: JsonObject,
        file: Path,
        path: String,
        issues: MutableList<ValidationIssue>
    ) {
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
                issues.add(
                    ValidationIssue(
                        file,
                        path,
                        "Nested arrays (array of array) not supported",
                        ERROR
                    )
                )
            }
        }

        validateNode(itemsObj, file, "$path.items", issues)
    }

    private fun validateMap(
        node: JsonObject,
        file: Path,
        path: String,
        issues: MutableList<ValidationIssue>
    ) {
        val values = node["values"]
        if (values != null) {
            val valuesObj = try {
                values.jsonObject
            } catch (e: Exception) {
                issues.add(ValidationIssue(file, path, "'values' must be an object", ERROR))
                return
            }
            validateNode(valuesObj, file, "$path.values", issues)
        }
    }

    private fun validateString(
        node: JsonObject,
        file: Path,
        path: String,
        issues: MutableList<ValidationIssue>
    ) {
        val enumValues = node["enum"]
        if (enumValues != null) {
            val values = try {
                enumValues.jsonArray.map { it.jsonPrimitive.content }
            } catch (_: Exception) {
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
            (json["eventName"] as? JsonPrimitive)?.contentOrNull
                ?: (json["title"] as? JsonPrimitive)?.contentOrNull
                ?: file.fileName.toString().removeSuffix(".json")
        } catch (_: Exception) {
            null
        }
    }
}
