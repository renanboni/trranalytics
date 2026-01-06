package com.therealreal.generator.io

import java.nio.file.Files
import java.nio.file.Path
import kotlin.io.path.writeText

class TypeScriptFileWriter(private val outDir: Path) {

    init {
        Files.createDirectories(outDir)
    }

    fun write(fileName: String, content: String) {
        val outFile = outDir.resolve(fileName)
        outFile.writeText(content)
    }
}
