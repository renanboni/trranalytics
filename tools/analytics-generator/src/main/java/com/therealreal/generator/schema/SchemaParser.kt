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
    private val schemasRoot: Path? = null,
    private val commonFields: List<Field> = emptyList(),
    private val familyCommonFields: Map<String, List<Field>> = emptyMap()
) {

    private val typeParser = TypeParser()
    private val versionRegex = Regex("""^v(\d+)$""")

    fun parse(schemaFile: Path): EventDef {
        // Expect: .../<family>/<event>/<vN>.json or .../<family>/<subfamily>/<event>/<vN>.json
        val normalized = schemaFile.normalize().toString().replace('\\', '/')
        val parts = normalized.split('/').filter { it.isNotBlank() }
        if (parts.size < 3) {
            throw SchemaParseException(
                message = "Schema path must end with <family>/<event>/<vN>.json",
                file = schemaFile,
                at = "path"
            )
        }

        // Determine family/subfamily structure based on path depth from schemas root
        val (familyRaw, subFamilyRaw, eventRaw) = if (schemasRoot != null) {
            val relativePath = schemasRoot.relativize(schemaFile.parent) // parent to exclude version file
            val relParts = relativePath.toString().replace('\\', '/').split('/').filter { it.isNotBlank() }
            when {
                relParts.size >= 3 -> Triple(relParts[0], relParts[1], relParts[2])
                relParts.size == 2 -> Triple(relParts[0], null, relParts[1])
                else -> Triple(parts[parts.size - 3], null, parts[parts.size - 2])
            }
        } else {
            Triple(parts[parts.size - 3], null, parts[parts.size - 2])
        }

        val familyName = familyRaw.toPascalCase()
        val subFamilyName = subFamilyRaw?.toPascalCase()
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

        val mergedRoot = mergeCommonFields(rootType, familyRaw)

        // Use relative path from schemas root if available, otherwise use filename
        val relativeSchemaPath = if (schemasRoot != null) {
            schemasRoot.relativize(schemaFile).toString()
        } else {
            schemaFile.fileName.toString()
        }

        return EventDef(
            familyName = familyName,
            familyRaw = familyRaw,
            subFamilyName = subFamilyName,
            subFamilyRaw = subFamilyRaw,
            eventClassName = eventClassName,
            analyticsEventName = analyticsEventName,
            schemaVersion = schemaVersion,
            schemaFilePath = relativeSchemaPath,
            root = mergedRoot
        )
    }

    private fun mergeCommonFields(rootType: Type.ObjectT, familyRaw: String): Type.ObjectT {
        val familyFields = familyCommonFields[familyRaw] ?: emptyList()

        if (commonFields.isEmpty() && familyFields.isEmpty()) return rootType

        val existingFieldNames = rootType.fields.map { it.name }.toMutableSet()

        // First add family-level common fields (more specific)
        val familyFieldsToAdd = familyFields.filter { it.name !in existingFieldNames }
        existingFieldNames.addAll(familyFieldsToAdd.map { it.name })

        // Then add global common fields (less specific, won't override family fields)
        val globalFieldsToAdd = commonFields.filter { it.name !in existingFieldNames }

        val mergedFields = (rootType.fields + familyFieldsToAdd + globalFieldsToAdd).sortedBy { it.name }

        return rootType.copy(fields = mergedFields)
    }
}
