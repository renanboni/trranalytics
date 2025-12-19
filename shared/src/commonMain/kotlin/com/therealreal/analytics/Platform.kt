package com.therealreal.analytics

interface Platform {
    val name: String
}

expect fun getPlatform(): Platform
