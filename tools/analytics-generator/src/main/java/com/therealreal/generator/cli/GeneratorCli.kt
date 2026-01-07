package com.therealreal.generator.cli

import com.therealreal.generator.config.GeneratorConfig
import com.therealreal.generator.emit.FamilyEmitter
import com.therealreal.generator.emit.TypeScriptFamilyEmitter
import com.therealreal.generator.io.KotlinFileWriter
import com.therealreal.generator.io.TypeScriptFileWriter
import com.therealreal.generator.io.SchemaLocator
import com.therealreal.generator.schema.SchemaParseException
import com.therealreal.generator.schema.SchemaParser
import com.therealreal.generator.validation.SchemaValidator
import kotlinx.serialization.json.Json
import java.nio.file.Paths
import kotlin.system.exitProcess

object GeneratorCli {

    fun run(args: Array<String>) {
        // Check for validate command
        if (args.firstOrNull() == "validate") {
            runValidate(args.drop(1).toTypedArray())
            return
        }

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

        val eventsByFamily = events.groupBy { it.familyName }.toSortedMap()

        // Generate Kotlin
        val kotlinWriter = KotlinFileWriter(config.kotlinOutDir)
        eventsByFamily.forEach { (familyName, familyEvents) ->
            val code = FamilyEmitter(
                pkg = config.outputPackage,
                familyName = familyName,
                familyEvents = familyEvents
            ).emitFamily()

            kotlinWriter.write("$familyName.kt", code)
            println("Generated ${config.kotlinOutDir.resolve("$familyName.kt")}")
        }

        // Generate TypeScript (if output directory specified)
        config.typeScriptOutDir?.let { tsOutDir ->
            val tsWriter = TypeScriptFileWriter(tsOutDir)

            // Write base interface
            tsWriter.write("AnalyticsEvent.ts", TypeScriptFamilyEmitter.emitBaseInterface())
            println("Generated ${tsOutDir.resolve("AnalyticsEvent.ts")}")

            // Write family files
            eventsByFamily.forEach { (familyName, familyEvents) ->
                val code = TypeScriptFamilyEmitter(
                    familyName = familyName,
                    familyEvents = familyEvents
                ).emitFamily()

                tsWriter.write("$familyName.ts", code)
                println("Generated ${tsOutDir.resolve("$familyName.ts")}")
            }

            // Write index file
            tsWriter.write("index.ts", TypeScriptFamilyEmitter.emitIndex(eventsByFamily.keys.toList()))
            println("Generated ${tsOutDir.resolve("index.ts")}")
        }
    }

    private fun parseArgs(args: Array<String>): GeneratorConfig {
        val schemasDir = Paths.get(args.getOrNull(0) ?: usage("Missing <schemasDir>"))
        val kotlinOutDir = Paths.get(args.getOrNull(1) ?: usage("Missing <kotlinOutDir>"))
        val typeScriptOutDir = args.getOrNull(2)?.let { Paths.get(it) }
        val pkg = args.getOrNull(3) ?: "analytics.events"
        return GeneratorConfig(
            schemasDir = schemasDir,
            kotlinOutDir = kotlinOutDir,
            typeScriptOutDir = typeScriptOutDir,
            outputPackage = pkg
        )
    }

    private fun runValidate(args: Array<String>) {
        val schemasDir = Paths.get(args.getOrNull(0) ?: run {
            System.err.println("Usage: validate <schemasDir>")
            exitProcess(1)
        })

        val locator = SchemaLocator()
        val validator = SchemaValidator()

        val schemaFiles = locator.findSchemas(schemasDir)
        if (schemaFiles.isEmpty()) {
            System.err.println("No .json schemas found under: $schemasDir")
            exitProcess(1)
        }

        println("Validating ${schemaFiles.size} schema(s)...\n")

        val result = validator.validateAll(schemaFiles)
        result.printReport()

        if (result.hasErrors) {
            exitProcess(2)
        }
    }

    private fun usage(msg: String): Nothing {
        System.err.println(msg)
        System.err.println("""
            Usage:
              generate: <schemasDir> <kotlinOutDir> [typeScriptOutDir] [outputPackage]
              validate: validate <schemasDir>
        """.trimIndent())
        exitProcess(1)
    }
}
