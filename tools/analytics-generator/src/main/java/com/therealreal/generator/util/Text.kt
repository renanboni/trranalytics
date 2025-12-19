package com.therealreal.generator.util

fun indent(s: String, spaces: Int): String {
    if (s.isBlank()) return ""
    val pad = " ".repeat(spaces)
    return s.lines().joinToString("\n") { if (it.isBlank()) it else pad + it }
}
