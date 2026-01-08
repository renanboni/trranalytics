package com.therealreal.generator.emit

import com.therealreal.generator.model.Type
import com.therealreal.generator.util.escapeKotlin
import com.therealreal.generator.util.indent
import com.therealreal.generator.util.toCamelCase
import com.therealreal.generator.util.toEnumConstant

class EventEmitter(
    private val familyName: String,
    private val versionInt: Int,
    private val eventClassName: String,
    private val analyticsEventName: String,
    private val schemaFilePath: String,
    private val root: Type.ObjectT
) {
    private val typeRenderer = KotlinTypeRenderer()
    private val collector = TypeCollector()

    fun emitEvent(): String {
        val collected = collector.collect(root)

        val requiredFields = root.fields.filter { it.required }
        val optionalFields = root.fields.filterNot { it.required }

        val allCtorArgs = mutableListOf<String>()

        requiredFields.forEach { f ->
            allCtorArgs += "val ${f.name.toCamelCase()}: ${typeRenderer.kotlinType(f.type)}"
        }

        optionalFields.forEach { f ->
            val type = typeRenderer.kotlinType(f.type, forceNullable = true)
            allCtorArgs += "val ${f.name.toCamelCase()}: $type = null"
        }

        val ctorArgs = allCtorArgs.joinToString(",\n    ")

        val optionalBacking = ""
        val optionalSetters = ""

        val enumsBlock = collected.enums.joinToString("\n\n") { emitEnum(it) }
        val nestedObjectsBlock = collected.objects.joinToString("\n\n") { emitNestedObjectClass(it) }

        val propsMap = buildMapEmitter(root, receiverIndent = "    ")

        return """
            /**
             * Generated from JSON Schema ($schemaFilePath)
             * event="$analyticsEventName", schemaVersion=$versionInt
             */
            data class $eventClassName(
                $ctorArgs
            ) : $familyName {

            ${indent(enumsBlock, 4).trimEnd()}

            ${indent(nestedObjectsBlock, 4).trimEnd()}

                override val eventName: String = "${analyticsEventName.escapeKotlin()}"
                override val schemaVersion: Int = $versionInt

            $optionalBacking
            ${indent(optionalSetters, 4).trimEnd()}

                override fun properties(): Map<String, Any?> = $propsMap

                override fun payload(): Map<String, Any?> = mapOf(
                    "event" to eventName,
                    "schemaVersion" to schemaVersion,
                    "properties" to properties()
                )
            }
        """.trimIndent()
    }

    private fun emitEnum(e: Type.EnumStringT): String {
        val values = e.values.joinToString(", ") { it.toEnumConstant() }
        return "enum class ${e.name} { $values }"
    }

    private fun emitNestedObjectClass(o: Type.ObjectT): String {
        val requiredFields = o.fields.filter { it.required }
        val optionalFields = o.fields.filterNot { it.required }

        val allCtorArgs = mutableListOf<String>()

        requiredFields.forEach { f ->
            allCtorArgs += "val ${f.name.toCamelCase()}: ${typeRenderer.kotlinType(f.type)}"
        }

        optionalFields.forEach { f ->
            val type = typeRenderer.kotlinType(f.type, forceNullable = true)
            allCtorArgs += "val ${f.name.toCamelCase()}: $type = null"
        }

        val ctorArgs = allCtorArgs.joinToString(",\n        ")

        val toMap = buildMapEmitter(o, receiverIndent = "        ")

        return """
            class ${o.name}(
                $ctorArgs
            ) {
                internal fun toMap(): Map<String, Any?> = $toMap
            }
        """.trimIndent()
    }

    private fun buildMapEmitter(o: Type.ObjectT, receiverIndent: String): String {
        val entries = mutableListOf<String>()

        o.fields.forEach { f ->
            val name = f.name
            val access = f.name.toCamelCase()

            if (f.required) {
                entries += emitMapEntry(name, access, f.type, receiverIndent)
            } else {
                entries += emitMapEntry(name, access, f.type, receiverIndent)
            }
        }

        val body = entries.joinToString(",\n")
        return """
            mapOf(
            $body
            $receiverIndent)
        """.trimIndent()
    }

    private fun emitMapEntry(jsonKey: String, valueExpr: String, t: Type, indent: String): String {
        return when (t) {
            is Type.StringT ->
                """${indent}"${jsonKey.escapeKotlin()}" to $valueExpr"""
            is Type.NumberT ->
                """${indent}"${jsonKey.escapeKotlin()}" to $valueExpr"""
            is Type.IntegerT ->
                """${indent}"${jsonKey.escapeKotlin()}" to $valueExpr"""
            is Type.BooleanT ->
                """${indent}"${jsonKey.escapeKotlin()}" to $valueExpr"""
            is Type.EnumStringT ->
                """${indent}"${jsonKey.escapeKotlin()}" to $valueExpr.name"""
            is Type.ObjectT ->
                """${indent}"${jsonKey.escapeKotlin()}" to $valueExpr.toMap()"""
            is Type.ArrayT -> emitArrayEntry(jsonKey, valueExpr, t, indent)
        }
    }

    private fun emitArrayEntry(jsonKey: String, valueExpr: String, t: Type.ArrayT, indent: String): String {
        val item = t.itemType.copyNonNull()
        return when (item) {
            is Type.StringT, is Type.NumberT, is Type.IntegerT, is Type.BooleanT ->
                """${indent}"${jsonKey.escapeKotlin()}" to $valueExpr"""
            is Type.EnumStringT ->
                """${indent}"${jsonKey.escapeKotlin()}" to $valueExpr.map { it.name }"""
            is Type.ObjectT ->
                """${indent}"${jsonKey.escapeKotlin()}" to $valueExpr.map { it.toMap() }"""
            is Type.ArrayT ->
                error("Nested arrays (array of array) not supported for key '$jsonKey'.")
        }
    }

    private fun Type.copyNonNull(): Type = typeRenderer.run { this@copyNonNull.copyNonNull() }
}
