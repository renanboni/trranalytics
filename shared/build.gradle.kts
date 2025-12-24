import org.jetbrains.kotlin.gradle.dsl.JvmTarget

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
val xcframeworkDir = layout.buildDirectory.dir("xcframework")

val assembleXCFramework by tasks.registering {
    group = "build"
    description = "Assembles XCFramework for iOS distribution"

    val frameworkName = "Shared"
    val xcframeworkPath = xcframeworkDir.get().file("$frameworkName.xcframework")

    dependsOn("linkDebugFrameworkIosArm64")
    dependsOn("linkDebugFrameworkIosSimulatorArm64")

    doLast {
        val arm64Framework = layout.buildDirectory.file(
            "bin/iosArm64/debugFramework/$frameworkName.framework"
        ).get().asFile

        val simulatorFramework = layout.buildDirectory.file(
            "bin/iosSimulatorArm64/debugFramework/$frameworkName.framework"
        ).get().asFile

        exec {
            commandLine(
                "xcodebuild", "-create-xcframework",
                "-framework", arm64Framework.absolutePath,
                "-framework", simulatorFramework.absolutePath,
                "-output", xcframeworkPath.asFile.absolutePath
            )
        }

        println("✓ XCFramework created at: ${xcframeworkPath.asFile.absolutePath}")
    }
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
