package com.therealreal.generator.cli

import com.therealreal.generator.config.GeneratorConfig
import com.therealreal.generator.emit.FamilyEmitter
import com.therealreal.generator.io.KotlinFileWriter
import com.therealreal.generator.io.SchemaLocator
import com.therealreal.generator.schema.SchemaParseException
import com.therealreal.generator.schema.SchemaParser
import kotlinx.serialization.json.Json
import java.nio.file.Paths
import kotlin.system.exitProcess

object GeneratorCli {

    fun run(args: Array<String>) {
        val config = parseArgs(args)

        val json = Json { ignoreUnknownKeys = true }
        val locator = SchemaLocator()
        val parser = SchemaParser(json)

        val schemaFiles = locator.findSchemas(config.schemasDir)
        if (schemaFiles.isEmpty()) {
            System.err.println("No .json schemas found under: ${config.schemasDir}")
            return
        }

        val events = try {
            schemaFiles.map { parser.parse(it) }
        } catch (e: SchemaParseException) {
            System.err.println("Schema error in ${e.file}: ${e.message} (at ${e.at})")
            exitProcess(2)
        }

        val writer = KotlinFileWriter(config.outDir)

        events
            .groupBy { it.familyName }
            .toSortedMap()
            .forEach { (familyName, familyEvents) ->
                val code = FamilyEmitter(
                    pkg = config.outputPackage,
                    familyName = familyName,
                    familyEvents = familyEvents
                ).emitFamily()

                writer.write("$familyName.kt", code)
                println("Generated ${config.outDir.resolve("$familyName.kt")}")
            }
    }

    private fun parseArgs(args: Array<String>): GeneratorConfig {
        val schemasDir = Paths.get(args.getOrNull(0) ?: usage("Missing <schemasDir>"))
        val outDir = Paths.get(args.getOrNull(1) ?: usage("Missing <outDir>"))
        val pkg = args.getOrNull(2) ?: "analytics.events"
        return GeneratorConfig(schemasDir = schemasDir, outDir = outDir, outputPackage = pkg)
    }

    private fun usage(msg: String): Nothing {
        System.err.println(msg)
        System.err.println("Usage: <schemasDir> <outDir> [outputPackage]")
        exitProcess(1)
    }
}
