import org.gradle.process.CommandLineArgumentProvider
import org.jetbrains.kotlin.gradle.dsl.JvmTarget

plugins {
    alias(libs.plugins.kotlinMultiplatform)
    alias(libs.plugins.androidLibrary)
    `maven-publish`
}

val libraryVersion: String = System.getenv("RELEASE_VERSION")
    ?: project.findProperty("version")?.toString()
    ?: "0.0.1-SNAPSHOT"

group = "com.therealreal.analytics"
version = libraryVersion

val schemasDir = layout.projectDirectory.dir("schemas")
val kotlinOutDir = layout.buildDirectory.dir("generated/source/analytics/commonMain/kotlin")
val typeScriptOutDir = layout.buildDirectory.dir("generated/source/analytics/typescript")
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
            kotlin.srcDir(kotlinOutDir)
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
    description = "Generate analytics event builders from JSON schemas (Kotlin + TypeScript)"

    dependsOn(generatorProject.tasks.named("classes"))

    classpath = generatorProject.the<JavaPluginExtension>()
        .sourceSets.getByName("main").runtimeClasspath

    mainClass.set("com.therealreal.generator.GeneratorKt")

    inputs.dir(schemasDir)
    outputs.dir(kotlinOutDir)
    outputs.dir(typeScriptOutDir)

    args(
        schemasDir.asFile.absolutePath,
        kotlinOutDir.get().asFile.absolutePath,
        typeScriptOutDir.get().asFile.absolutePath,
        "analytics.events"
    )
}

tasks.matching { it.name == "compileKotlinMetadata" }.configureEach {
    dependsOn(generateAnalyticsEvents)
}

val assembleXCFramework by tasks.registering(Exec::class) {
    group = "build"
    description = "Assembles XCFramework for iOS distribution"

    val frameworkName = "Shared"
    val arm64FrameworkDir = layout.buildDirectory.dir("bin/iosArm64/debugFramework")
    val simulatorFrameworkDir = layout.buildDirectory.dir("bin/iosSimulatorArm64/debugFramework")
    val xcframeworkDir = layout.buildDirectory.dir("xcframework")

    inputs.dir(arm64FrameworkDir)
    inputs.dir(simulatorFrameworkDir)
    outputs.dir(xcframeworkDir)

    executable = "xcodebuild"
    argumentProviders.add(CommandLineArgumentProvider {
        listOf(
            "-create-xcframework",
            "-framework", arm64FrameworkDir.get().file("$frameworkName.framework").asFile.absolutePath,
            "-framework", simulatorFrameworkDir.get().file("$frameworkName.framework").asFile.absolutePath,
            "-output", xcframeworkDir.get().file("$frameworkName.xcframework").asFile.absolutePath
        )
    })

    doFirst {
        xcframeworkDir.get().file("$frameworkName.xcframework").asFile.deleteRecursively()
    }

    doLast {
        println("✓ XCFramework created at: ${xcframeworkDir.get().file("$frameworkName.xcframework").asFile.absolutePath}")
    }

    dependsOn("linkDebugFrameworkIosArm64")
    dependsOn("linkDebugFrameworkIosSimulatorArm64")
}

publishing {
    publications {
        withType<MavenPublication> {
            pom {
                name.set("TRR Analytics")
                description.set("Kotlin Multiplatform analytics events library with type-safe event builders")
                url.set("https://github.com/therealreal/trr-analytics")

                licenses {
                    license {
                        name.set("MIT License")
                        url.set("https://opensource.org/licenses/MIT")
                    }
                }

                developers {
                    developer {
                        id.set("therealreal")
                        name.set("The RealReal")
                        organization.set("The RealReal")
                        organizationUrl.set("https://www.therealreal.com")
                    }
                }

                scm {
                    connection.set("scm:git:git://github.com/therealreal/trr-analytics.git")
                    developerConnection.set("scm:git:ssh://github.com/therealreal/trr-analytics.git")
                    url.set("https://github.com/therealreal/trr-analytics")
                }
            }
        }
    }

    repositories {
        maven {
            name = "GitHubPackages"
            url = uri("https://maven.pkg.github.com/therealreal/trr-analytics")
            credentials {
                username = System.getenv("GITHUB_ACTOR")
                password = System.getenv("GITHUB_TOKEN")
            }
        }
    }
}
