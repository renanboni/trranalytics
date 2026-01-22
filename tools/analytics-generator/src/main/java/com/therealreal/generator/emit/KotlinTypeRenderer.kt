package com.therealreal.generator.emit

import com.therealreal.generator.model.Type

class KotlinTypeRenderer {

    fun kotlinType(t: Type, forceNullable: Boolean = false): String {
        val base = when (t) {
            is Type.StringT -> "String"
            is Type.NumberT -> "Double"
            is Type.IntegerT -> "Long"
            is Type.BooleanT -> "Boolean"
            is Type.EnumStringT -> t.name
            is Type.ObjectT -> t.name
            is Type.ArrayT -> "List<${kotlinType(t.itemType.copyNonNull())}>"
            is Type.MapT -> "Map<String, ${kotlinType(t.valueType.copyNonNull())}>"
            is Type.AnyT -> "Any"
        }

        val isNullable = t.nullable || forceNullable
        return if (isNullable) "$base?" else base
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
