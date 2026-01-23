package com.therealreal.generator.schema

import com.therealreal.generator.model.EventDef
import com.therealreal.generator.model.Field
import com.therealreal.generator.model.ParsePath
import com.therealreal.generator.model.Type
import com.therealreal.generator.util.toPascalCase
import com.therealreal.generator.util.toTitleCase
import kotlinx.serialization.json.Json
import kotlinx.serialization.json.jsonObject
import java.nio.file.Path
import kotlin.io.path.readText

class SchemaParser(
    private val json: Json,
    private val commonFields: List<Field> = emptyList()
) {

    private val typeParser = TypeParser()
    private val versionRegex = Regex("""^v(\d+)$""")

    fun parse(schemaFile: Path): EventDef {
        // Expect: .../<family>/<event>/<vN>.json
        val normalized = schemaFile.normalize().toString().replace('\\', '/')
        val parts = normalized.split('/').filter { it.isNotBlank() }
        if (parts.size < 3) {
            throw SchemaParseException(
                message = "Schema path must end with <family>/<event>/<vN>.json",
                file = schemaFile,
                at = "path"
            )
        }

        val familyRaw = parts[parts.size - 3]
        val familyName = familyRaw.toPascalCase()
        val eventRaw = parts[parts.size - 2]
        val versionFileName = schemaFile.fileName.toString().removeSuffix(".json")

        val versionMatch = versionRegex.matchEntire(versionFileName)
            ?: throw SchemaParseException(
                message = "Schema filename must be v<N>.json (e.g., v1.json), got: ${schemaFile.fileName}",
                file = schemaFile,
                at = "filename"
            )
        val schemaVersion = versionMatch.groupValues[1].toInt()
        val eventClassName = "${eventRaw.toPascalCase()}V$schemaVersion"

        val rootObj = json.parseToJsonElement(schemaFile.readText()).jsonObject

        val analyticsEventName = (
            rootObj.stringOrNull("eventName")
                ?: rootObj.stringOrNull("title")
                ?: schemaFile.fileName.toString().removeSuffix(".json")
        ).toTitleCase()

        val registry = NameRegistry()
        val rootType = typeParser.parse(
            schemaNode = rootObj,
            suggestedName = eventClassName,
            file = schemaFile,
            path = ParsePath.Root,
            names = registry
        )

        if (rootType !is Type.ObjectT) {
            throw SchemaParseException(
                message = "Top-level schema must be an object; got ${rootType.debug()}",
                file = schemaFile,
                at = "root"
            )
        }

        val mergedRoot = mergeCommonFields(rootType)

        return EventDef(
            familyName = familyName,
            familyRaw = familyRaw,
            eventClassName = eventClassName,
            analyticsEventName = analyticsEventName,
            schemaVersion = schemaVersion,
            schemaFilePath = schemaFile.toString(),
            root = mergedRoot
        )
    }

    private fun mergeCommonFields(rootType: Type.ObjectT): Type.ObjectT {
        if (commonFields.isEmpty()) return rootType

        val existingFieldNames = rootType.fields.map { it.name }.toSet()
        val fieldsToAdd = commonFields.filter { it.name !in existingFieldNames }

        val mergedFields = (rootType.fields + fieldsToAdd).sortedBy { it.name }

        return rootType.copy(fields = mergedFields)
    }
}
