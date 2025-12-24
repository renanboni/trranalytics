package com.therealreal.generator.emit

import com.therealreal.generator.model.Type
import com.therealreal.generator.util.escapeKotlin
import com.therealreal.generator.util.indent
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
            allCtorArgs += "val ${f.name}: ${typeRenderer.kotlinType(f.type)}"
        }

        optionalFields.forEach { f ->
            val type = typeRenderer.kotlinType(f.type, forceNullable = true)
            allCtorArgs += "val ${f.name}: $type = null"
        }

        val ctorArgs = allCtorArgs.joinToString(",\n    ")

        val optionalBacking = ""
        val optionalSetters = ""

        val enumsBlock = collected.enums.joinToString("\n\n") { emitEnum(it) }
        val nestedObjectsBlock = collected.objects.joinToString("\n\n") { emitNestedObjectClass(it) }

        val propsJson = buildJsonObjectEmitter(root, receiverIndent = "    ")

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

                override fun properties(): JsonObject = $propsJson

                override fun payload(): JsonObject = buildJsonObject {
                    put("event", eventName)
                    put("schemaVersion", schemaVersion)
                    put("properties", properties())
                }
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
            allCtorArgs += "val ${f.name}: ${typeRenderer.kotlinType(f.type)}"
        }

        optionalFields.forEach { f ->
            val type = typeRenderer.kotlinType(f.type, forceNullable = true)
            allCtorArgs += "val ${f.name}: $type = null"
        }

        val ctorArgs = allCtorArgs.joinToString(",\n        ")

        val toJson = buildJsonObjectEmitter(o, receiverIndent = "        ")

        return """
            class ${o.name}(
                $ctorArgs
            ) {
                internal fun toJson(): JsonObject = $toJson
            }
        """.trimIndent()
    }

    private fun buildJsonObjectEmitter(o: Type.ObjectT, receiverIndent: String): String {
        val lines = mutableListOf<String>()

        o.fields.forEach { f ->
            val name = f.name
            val access = name

            if (f.required) {
                lines += emitPutLine(name, access, f.type, receiverIndent)
            } else {
                lines += "${receiverIndent}${access}?.let {"
                lines += emitPutLine(name, "it", f.type.copyNonNull(), receiverIndent + "    ")
                lines += "${receiverIndent}}"
            }
        }

        val body = lines.joinToString("\n")
        return """
            buildJsonObject {
            $body
            $receiverIndent}
        """.trimIndent()
    }

    private fun emitPutLine(jsonKey: String, valueExpr: String, t: Type, indent: String): String {
        return when (t) {
            is Type.StringT ->
                """${indent}put("${jsonKey.escapeKotlin()}", $valueExpr)"""
            is Type.NumberT ->
                """${indent}put("${jsonKey.escapeKotlin()}", $valueExpr)"""
            is Type.IntegerT ->
                """${indent}put("${jsonKey.escapeKotlin()}", $valueExpr)"""
            is Type.BooleanT ->
                """${indent}put("${jsonKey.escapeKotlin()}", $valueExpr)"""
            is Type.EnumStringT ->
                """${indent}put("${jsonKey.escapeKotlin()}", $valueExpr.name)"""
            is Type.ObjectT ->
                """${indent}put("${jsonKey.escapeKotlin()}", $valueExpr.toJson())"""
            is Type.ArrayT -> emitArrayPut(jsonKey, valueExpr, t, indent)
        }
    }

    private fun emitArrayPut(jsonKey: String, valueExpr: String, t: Type.ArrayT, indent: String): String {
        val item = t.itemType.copyNonNull()
        return when (item) {
            is Type.StringT, is Type.NumberT, is Type.IntegerT, is Type.BooleanT ->
                """${indent}put("${jsonKey.escapeKotlin()}", buildJsonArray { $valueExpr.forEach { add(it) } })"""
            is Type.EnumStringT ->
                """${indent}put("${jsonKey.escapeKotlin()}", buildJsonArray { $valueExpr.forEach { add(it.name) } })"""
            is Type.ObjectT ->
                """${indent}put("${jsonKey.escapeKotlin()}", buildJsonArray { $valueExpr.forEach { add(it.toJson()) } })"""
            is Type.ArrayT ->
                error("Nested arrays (array of array) not supported for key '$jsonKey'.")
        }
    }

    private fun Type.copyNonNull(): Type = typeRenderer.run { this@copyNonNull.copyNonNull() }
}
