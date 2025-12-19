package com.therealreal.generator.model

sealed interface ParsePath {
    data object Root : ParsePath
    data class Property(val propName: String) : ParsePath
    data class ArrayItems(val arrayPropName: String) : ParsePath

    fun describe(): String = when (this) {
        Root -> "root"
        is Property -> "root.properties.${propName}"
        is ArrayItems -> "root.properties.${arrayPropName}.items"
    }
}
