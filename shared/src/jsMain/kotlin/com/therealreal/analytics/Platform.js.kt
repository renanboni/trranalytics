package com.therealreal.analytics

import kotlinx.browser.window

class JsPlatform : Platform {
    override val name: String = "Browser ${window.navigator.userAgent}"
}

actual fun getPlatform(): Platform = JsPlatform()
