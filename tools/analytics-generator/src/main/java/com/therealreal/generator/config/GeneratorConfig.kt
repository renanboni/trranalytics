package com.therealreal.generator.config

import java.nio.file.Path

data class GeneratorConfig(
    val schemasDir: Path,
    val outDir: Path,
    val outputPackage: String = "analytics.events"
)
