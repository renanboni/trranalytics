package com.therealreal.generator.validation

import java.nio.file.Path

data class ValidationIssue(
    val file: Path,
    val path: String,
    val message: String,
    val severity: Severity
) {
    enum class Severity { ERROR, WARNING }

    override fun toString(): String {
        val prefix = if (severity == Severity.ERROR) "ERROR" else "WARN"
        return "[$prefix] $file at $path: $message"
    }
}

data class ValidationResult(
    val issues: List<ValidationIssue>
) {
    val errors: List<ValidationIssue> get() = issues.filter { it.severity == ValidationIssue.Severity.ERROR }
    val warnings: List<ValidationIssue> get() = issues.filter { it.severity == ValidationIssue.Severity.WARNING }
    val hasErrors: Boolean get() = errors.isNotEmpty()
    val isValid: Boolean get() = !hasErrors

    fun printReport() {
        if (issues.isEmpty()) {
            println("✓ All schemas are valid")
            return
        }

        errors.forEach { println("  ✗ $it") }
        warnings.forEach { println("  ⚠ $it") }

        println()
        println("Summary: ${errors.size} error(s), ${warnings.size} warning(s)")
    }

    companion object {
        fun merge(results: List<ValidationResult>): ValidationResult =
            ValidationResult(results.flatMap { it.issues })
    }
}
