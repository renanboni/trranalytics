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
                .filter { !it.toString().contains("/_common/") && !it.toString().contains("\\_common\\") }
                .sorted()
                .toList()
        }
    }

    fun findCommonFieldsSchema(root: Path): Path? {
        val commonPath = root.resolve("_common/base_fields.json")
        return if (Files.exists(commonPath)) commonPath else null
    }

    fun findFamilyCommonFieldsSchemas(root: Path): Map<String, Path> {
        require(Files.exists(root)) { "Schemas dir not found: $root" }

        val result = mutableMapOf<String, Path>()

        Files.list(root).use { stream ->
            stream.asSequence()
                .filter { Files.isDirectory(it) }
                .filter { it.fileName.toString() != "_common" }
                .forEach { familyDir ->
                    val familyCommonPath = familyDir.resolve("_common/base_fields.json")
                    if (Files.exists(familyCommonPath)) {
                        result[familyDir.fileName.toString()] = familyCommonPath
                    }
                }
        }

        return result
    }
}
