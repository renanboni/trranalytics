package com.therealreal.generator.emit

import com.therealreal.generator.model.Field
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

        val enumsBlock = collected.enums.joinToString("\n\n") { emitEnum(it) }
        val nestedObjectsBlock = collected.objects.joinToString("\n\n") { emitNestedObjectClass(it) }

        val propsMap = buildMapEmitter(root, receiverIndent = "    ")

        val secondaryCtor = emitSecondaryConstructor(requiredFields, optionalFields)

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

            ${indent(secondaryCtor, 4).trimEnd()}

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
        val lines = mutableListOf<String>()

        o.fields.forEach { f ->
            val name = f.name
            val access = f.name.toCamelCase()

            if (f.required) {
                lines += emitPutEntry(name, access, f.type, receiverIndent)
            } else {
                lines += "${receiverIndent}${access}?.let { put(\"${name.escapeKotlin()}\", ${emitValueExpr("it", f.type.copyNonNull())}) }"
            }
        }

        val body = lines.joinToString("\n")
        return """
            buildMap {
            $body
            $receiverIndent}
        """.trimIndent()
    }

    private fun emitPutEntry(jsonKey: String, valueExpr: String, t: Type, indent: String): String {
        return """${indent}put("${jsonKey.escapeKotlin()}", ${emitValueExpr(valueExpr, t)})"""
    }

    private fun emitValueExpr(valueExpr: String, t: Type): String {
        return when (t) {
            is Type.StringT -> valueExpr
            is Type.NumberT -> valueExpr
            is Type.IntegerT -> valueExpr
            is Type.BooleanT -> valueExpr
            is Type.EnumStringT -> "$valueExpr.name"
            is Type.ObjectT -> "$valueExpr.toMap()"
            is Type.ArrayT -> emitArrayValueExpr(valueExpr, t)
        }
    }

    private fun emitArrayValueExpr(valueExpr: String, t: Type.ArrayT): String {
        val item = t.itemType.copyNonNull()
        return when (item) {
            is Type.StringT, is Type.NumberT, is Type.IntegerT, is Type.BooleanT -> valueExpr
            is Type.EnumStringT -> "$valueExpr.map { it.name }"
            is Type.ObjectT -> "$valueExpr.map { it.toMap() }"
            is Type.ArrayT -> error("Nested arrays not supported")
        }
    }

    private fun Type.copyNonNull(): Type = typeRenderer.run { this@copyNonNull.copyNonNull() }

    /**
     * Generates a secondary constructor with only required fields.
     * This provides iOS compatibility since Kotlin default parameters aren't exposed to Swift.
     */
    private fun emitSecondaryConstructor(
        requiredFields: List<Field>,
        optionalFields: List<Field>
    ): String {
        if (optionalFields.isEmpty()) return ""

        val params = requiredFields.joinToString(", ") { f ->
            "${f.name.toCamelCase()}: ${typeRenderer.kotlinType(f.type)}"
        }

        val allArgs = mutableListOf<String>()
        requiredFields.forEach { f ->
            allArgs += f.name.toCamelCase()
        }
        optionalFields.forEach { _ ->
            allArgs += "null"
        }
        val primaryCtorCall = allArgs.joinToString(", ")

        return """
            /** Secondary constructor with required fields only (for iOS compatibility) */
            constructor($params) : this($primaryCtorCall)
        """.trimIndent()
    }
}
