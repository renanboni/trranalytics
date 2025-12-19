package com.therealreal.generator.model

sealed interface Type {
    val nullable: Boolean
    fun debug(): String

    data class StringT(override val nullable: Boolean) : Type {
        override fun debug() = "string${if (nullable) "?" else ""}"
    }

    data class NumberT(override val nullable: Boolean) : Type {
        override fun debug() = "number${if (nullable) "?" else ""}"
    }

    data class IntegerT(override val nullable: Boolean) : Type {
        override fun debug() = "integer${if (nullable) "?" else ""}"
    }

    data class BooleanT(override val nullable: Boolean) : Type {
        override fun debug() = "boolean${if (nullable) "?" else ""}"
    }

    data class EnumStringT(
        val name: String,
        val values: List<String>,
        override val nullable: Boolean
    ) : Type {
        override fun debug() = "enum($name)${if (nullable) "?" else ""}"
    }

    data class ObjectT(
        val name: String,
        val fields: List<Field>,
        override val nullable: Boolean
    ) : Type {
        override fun debug() = "object($name)${if (nullable) "?" else ""}"
    }

    data class ArrayT(
        val itemType: Type,
        override val nullable: Boolean
    ) : Type {
        override fun debug() = "array(${itemType.debug()})${if (nullable) "?" else ""}"
    }
}
