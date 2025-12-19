package com.therealreal.generator.schema

import java.nio.file.Path

class SchemaParseException(
    message: String,
    val file: Path,
    val at: String
) : RuntimeException(message)
