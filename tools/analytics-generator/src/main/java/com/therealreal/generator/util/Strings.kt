package com.therealreal.generator.util

fun String.toPascalCase(): String =
    split(Regex("[^A-Za-z0-9]+"))
        .filter { it.isNotBlank() }
        .joinToString("") { part ->
            part.replaceFirstChar { c -> c.uppercase() }
        }

fun String.toCamelCase(): String {
    if (contains(Regex("[_-]"))) {
        return split(Regex("[^A-Za-z0-9]+"))
            .filter { it.isNotBlank() }
            .mapIndexed { index, part ->
                if (index == 0) part.lowercase()
                else part.replaceFirstChar { c -> c.uppercase() }
            }
            .joinToString("")
    }
    return this
}

fun String.toEnumConstant(): String =
    uppercase()
        .replace(Regex("[^A-Z0-9]+"), "_")
        .trim('_')
        .ifBlank { "UNKNOWN" }

fun String.escapeKotlin(): String =
    replace("\\", "\\\\").replace("\"", "\\\"")

fun String.singularize(): String =
    if (endsWith("s") && length > 1) dropLast(1) else this

fun String.toTitleCase(): String =
    split(Regex("[_-]+"))
        .filter { it.isNotBlank() }
        .joinToString(" ") { part ->
            part.replaceFirstChar { c -> c.uppercase() }
        }
