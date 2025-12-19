package com.therealreal.generator.schema

/**
 * Ensures nested class/enum names are unique per event.
 */
class NameRegistry {
    private val seen = linkedMapOf<String, Int>()

    fun unique(base: String): String {
        val current = seen[base]
        return if (current == null) {
            seen[base] = 1
            base
        } else {
            val next = current + 1
            seen[base] = next
            base + next
        }
    }
}
