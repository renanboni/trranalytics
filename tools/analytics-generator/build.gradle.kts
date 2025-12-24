plugins {
    kotlin("jvm")
}

kotlin {
    jvmToolchain(17)
}

repositories { mavenCentral() }

dependencies {
    implementation("org.jetbrains.kotlinx:kotlinx-serialization-json:1.6.3")
}
