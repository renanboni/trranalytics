package com.therealreal.generator.emit

import com.therealreal.generator.model.Type

data class CollectedTypes(
    val enums: List<Type.EnumStringT>,
    val objects: List<Type.ObjectT>
)

class TypeCollector {

    fun collect(root: Type.ObjectT): CollectedTypes {
        val enums = linkedMapOf<String, Type.EnumStringT>()
        val objects = linkedMapOf<String, Type.ObjectT>()

        fun visit(t: Type, isRoot: Boolean) {
            when (t) {
                is Type.EnumStringT -> enums.putIfAbsent(t.name, t)
                is Type.ObjectT -> {
                    if (!isRoot) objects.putIfAbsent(t.name, t)
                    t.fields.forEach { visit(it.type, isRoot = false) }
                }
                is Type.ArrayT -> visit(t.itemType, isRoot = false)
                is Type.MapT -> visit(t.valueType, isRoot = false)
                is Type.StringT, is Type.NumberT, is Type.IntegerT, is Type.BooleanT, is Type.AnyT -> Unit
            }
        }

        visit(root, isRoot = true)

        return CollectedTypes(
            enums = enums.values.toList(),
            objects = objects.values.toList()
        )
    }
}
