package com.therealreal.generator.emit

import com.therealreal.generator.model.Type

class TypeScriptTypeRenderer {

    fun tsType(t: Type, forceNullable: Boolean = false): String {
        val base = when (t) {
            is Type.StringT -> "string"
            is Type.NumberT -> "number"
            is Type.IntegerT -> "number"
            is Type.BooleanT -> "boolean"
            is Type.EnumStringT -> t.name
            is Type.ObjectT -> t.name
            is Type.ArrayT -> "${tsType(t.itemType.copyNonNull())}[]"
            is Type.MapT -> "Record<string, ${tsType(t.valueType.copyNonNull())}>"
            is Type.AnyT -> "unknown"
        }

        val isNullable = t.nullable || forceNullable
        return if (isNullable) "$base | null" else base
    }

    fun tsEnumType(e: Type.EnumStringT): String {
        return e.values.joinToString(" | ") { "\"$it\"" }
    }

    fun Type.copyNonNull(): Type = when (this) {
        is Type.StringT -> copy(nullable = false)
        is Type.NumberT -> copy(nullable = false)
        is Type.IntegerT -> copy(nullable = false)
        is Type.BooleanT -> copy(nullable = false)
        is Type.EnumStringT -> copy(nullable = false)
        is Type.ObjectT -> copy(nullable = false)
        is Type.ArrayT -> copy(nullable = false)
        is Type.MapT -> copy(nullable = false)
        is Type.AnyT -> copy(nullable = false)
    }
}
