import org.gradle.api.DefaultTask
import org.gradle.api.file.DirectoryProperty
import org.gradle.api.provider.Property
import org.gradle.api.tasks.Input
import org.gradle.api.tasks.InputDirectory
import org.gradle.api.tasks.OutputDirectory
import org.gradle.api.tasks.TaskAction
import org.gradle.process.ExecOperations
import org.jetbrains.kotlin.gradle.dsl.JvmTarget
import javax.inject.Inject

plugins {
    alias(libs.plugins.kotlinMultiplatform)
    alias(libs.plugins.androidLibrary)
    `maven-publish`
}

// Version from Git tag (e.g., v1.0.0 -> 1.0.0) or default to SNAPSHOT
val libraryVersion: String = System.getenv("RELEASE_VERSION")
    ?: project.findProperty("version")?.toString()
    ?: "0.0.1-SNAPSHOT"

group = "com.therealreal.analytics"
version = libraryVersion

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

// XCFramework build task for iOS distribution
abstract class AssembleXCFrameworkTask : DefaultTask() {
    @get:Input
    abstract val frameworkName: Property<String>

    @get:InputDirectory
    abstract val arm64FrameworkDir: DirectoryProperty

    @get:InputDirectory
    abstract val simulatorFrameworkDir: DirectoryProperty

    @get:OutputDirectory
    abstract val xcframeworkDir: DirectoryProperty

    @get:Inject
    abstract val execOperations: ExecOperations

    @TaskAction
    fun assemble() {
        val name = frameworkName.get()
        val xcframeworkPath = xcframeworkDir.file("$name.xcframework").get().asFile

        execOperations.exec {
            commandLine(
                "xcodebuild", "-create-xcframework",
                "-framework", arm64FrameworkDir.file("$name.framework").get().asFile.absolutePath,
                "-framework", simulatorFrameworkDir.file("$name.framework").get().asFile.absolutePath,
                "-output", xcframeworkPath.absolutePath
            )
        }

        println("✓ XCFramework created at: ${xcframeworkPath.absolutePath}")
    }
}

val assembleXCFramework by tasks.registering(AssembleXCFrameworkTask::class) {
    group = "build"
    description = "Assembles XCFramework for iOS distribution"

    frameworkName.set("Shared")
    arm64FrameworkDir.set(layout.buildDirectory.dir("bin/iosArm64/debugFramework"))
    simulatorFrameworkDir.set(layout.buildDirectory.dir("bin/iosSimulatorArm64/debugFramework"))
    xcframeworkDir.set(layout.buildDirectory.dir("xcframework"))

    dependsOn("linkDebugFrameworkIosArm64")
    dependsOn("linkDebugFrameworkIosSimulatorArm64")
}

// Maven publishing configuration
publishing {
    publications {
        // Configure publications for GitHub Packages
        withType<MavenPublication> {
            pom {
                name.set("TRR Analytics")
                description.set("Kotlin Multiplatform analytics events library with type-safe event builders")
                url.set("https://github.com/therealreal/TRRAnalytics")

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
                    connection.set("scm:git:git://github.com/therealreal/TRRAnalytics.git")
                    developerConnection.set("scm:git:ssh://github.com/therealreal/TRRAnalytics.git")
                    url.set("https://github.com/therealreal/TRRAnalytics")
                }
            }
        }
    }

    repositories {
        maven {
            name = "GitHubPackages"
            url = uri("https://maven.pkg.github.com/therealreal/TRRAnalytics")
            credentials {
                username = System.getenv("GITHUB_ACTOR")
                password = System.getenv("GITHUB_TOKEN")
            }
        }
    }
}
