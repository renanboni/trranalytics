import org.jetbrains.kotlin.gradle.dsl.JvmTarget

plugins {
    alias(libs.plugins.kotlinMultiplatform)
    alias(libs.plugins.androidLibrary)
}

val schemasDir = layout.projectDirectory.dir("schemas")
val outDir = layout.buildDirectory.dir("generated/source/analytics/commonMain/kotlin")
val generatorProject = project(":tools:analytics-generator")

kotlin {
    jvmToolchain(17)

    androidTarget {
        compilerOptions {
            jvmTarget.set(JvmTarget.JVM_11)
        }
    }

    listOf(
        iosArm64(),
        iosSimulatorArm64()
    ).forEach { iosTarget ->
        iosTarget.binaries.framework {
            baseName = "Shared"
            isStatic = true
            binaryOption("bundleId", "com.therealreal.analytics.shared")
        }
    }

    sourceSets {
        val commonMain by getting {
            kotlin.srcDir(outDir)
            dependencies {
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-json:1.6.3")
            }
        }
    }

    sourceSets.all {
        languageSettings.optIn("kotlin.experimental.ExperimentalNativeApi")
    }
}

android {
    namespace = "com.therealreal.analytics.shared"
    compileSdk = libs.versions.android.compileSdk.get().toInt()
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_11
        targetCompatibility = JavaVersion.VERSION_11
    }
    defaultConfig {
        minSdk = libs.versions.android.minSdk.get().toInt()
    }
}

val generateAnalyticsEvents = tasks.register<JavaExec>("generateAnalyticsEvents") {
    group = "codegen"
    description = "Generate analytics event builders from JSON schemas"

    dependsOn(generatorProject.tasks.named("classes"))

    classpath = generatorProject.the<JavaPluginExtension>()
        .sourceSets.getByName("main").runtimeClasspath

    mainClass.set("com.therealreal.generator.GeneratorKt")

    inputs.dir(schemasDir)
    outputs.dir(outDir)

    args(
        schemasDir.asFile.absolutePath,
        outDir.get().asFile.absolutePath,
        "analytics.events"
    )
}

tasks.matching { it.name == "compileKotlinMetadata" }.configureEach {
    dependsOn(generateAnalyticsEvents)
}
