package com.therealreal.generator.emit

import com.therealreal.generator.model.Type
import com.therealreal.generator.util.escapeKotlin
import com.therealreal.generator.util.indent

class TypeScriptEventEmitter(
    private val familyName: String,
    private val eventClassName: String,
    private val analyticsEventName: String,
    private val schemaVersion: Int,
    private val schemaFilePath: String,
    private val root: Type.ObjectT,
    private val isDeprecated: Boolean = false,
    private val latestVersion: Int = schemaVersion
) {
    private val typeRenderer = TypeScriptTypeRenderer()
    private val collector = TypeCollector()

    fun emitEvent(): String {
        val collected = collector.collect(root)

        val requiredFields = root.fields.filter { it.required }
        val optionalFields = root.fields.filterNot { it.required }

        val allProps = mutableListOf<String>()

        requiredFields.forEach { f ->
            allProps += "${f.name}: ${typeRenderer.tsType(f.type)};"
        }

        optionalFields.forEach { f ->
            val baseType = typeRenderer.run { tsType(f.type.copyNonNull()) }
            allProps += "${f.name}?: $baseType | null;"
        }

        val propsBlock = allProps.joinToString("\n  ")

        val enumsBlock = collected.enums.joinToString("\n\n") { emitEnumType(it) }
        val nestedInterfacesBlock = collected.objects.joinToString("\n\n") { emitNestedInterface(it) }

        val nestedTypesBlock = listOf(enumsBlock, nestedInterfacesBlock)
            .filter { it.isNotBlank() }
            .joinToString("\n\n")

        val baseEventClassName = eventClassName.replace(Regex("V\\d+$"), "")
        val deprecatedTag = if (isDeprecated) {
            "\n * @deprecated Use ${baseEventClassName}V$latestVersion instead"
        } else ""

        return """
/**
 * Generated from JSON Schema ($schemaFilePath)
 * event="$analyticsEventName"$deprecatedTag
 */
export interface $eventClassName extends $familyName {
  readonly event_name: "${analyticsEventName.escapeKotlin()}";
  $propsBlock
}

${indent(nestedTypesBlock, 0).trimEnd()}
        """.trimIndent().trim() + "\n"
    }

    private fun emitEnumType(e: Type.EnumStringT): String {
        val unionType = typeRenderer.tsEnumType(e)
        return "export type ${e.name} = $unionType;"
    }

    private fun emitNestedInterface(o: Type.ObjectT): String {
        val requiredFields = o.fields.filter { it.required }
        val optionalFields = o.fields.filterNot { it.required }

        val allProps = mutableListOf<String>()

        requiredFields.forEach { f ->
            allProps += "${f.name}: ${typeRenderer.tsType(f.type)};"
        }

        optionalFields.forEach { f ->
            val baseType = typeRenderer.run { tsType(f.type.copyNonNull()) }
            allProps += "${f.name}?: $baseType | null;"
        }

        val propsBlock = allProps.joinToString("\n  ")

        return """
export interface ${o.name} {
  $propsBlock
}
        """.trimIndent().trim()
    }
}
