package com.therealreal.generator.io

import java.nio.file.Files
import java.nio.file.Path
import kotlin.io.path.extension
import kotlin.io.path.isRegularFile
import kotlin.streams.asSequence

class SchemaLocator {
    fun findSchemas(root: Path): List<Path> {
        require(Files.exists(root)) { "Schemas dir not found: $root" }

        return Files.walk(root).use { stream ->
            stream.asSequence()
                .filter { it.isRegularFile() && it.extension.equals("json", ignoreCase = true) }
                .sorted()
                .toList()
        }
    }
}
