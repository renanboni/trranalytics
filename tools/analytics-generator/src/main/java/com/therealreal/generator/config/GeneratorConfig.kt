package com.therealreal.generator.config

import java.nio.file.Path

data class GeneratorConfig(
    val schemasDir: Path,
    val kotlinOutDir: Path,
    val typeScriptOutDir: Path? = null,
    val outputPackage: String = "analytics.events"
)
