# Release Process

This document describes how to create a new release of TRRAnalytics.

## Automated Release Strategy

The project uses **Git tags** to trigger automated releases via GitHub Actions. When you push a version tag, the workflow automatically:

1. ✅ Builds Android artifacts (AAR)
2. ✅ Builds iOS XCFramework
3. ✅ Publishes to GitHub Packages (Maven)
4. ✅ Creates a GitHub Release with the XCFramework
5. ✅ Updates Package.swift for Swift Package Manager
6. ✅ Generates a changelog from git commits

## How to Release

There are **three ways** to create a release:

### Option 1: Make Command (Easiest)

Use the Makefile for the simplest experience:

```bash
make release
```

Or use the script directly:

```bash
./scripts/release.sh
```

The script will:
- ✅ Show current version
- ✅ Prompt for version bump type (patch/minor/major) or custom version
- ✅ Create and push the tag automatically
- ✅ Trigger the GitHub Actions workflow

### Option 2: Manual Tag

Create and push a version tag manually:

```bash
# Ensure changes are committed
git add .
git commit -m "Your changes"
git push origin main

# Create version tag (use semantic versioning)
git tag v1.1.0
git push origin v1.1.0
```

### Option 3: GitHub UI (Manual Workflow)

Trigger a release directly from GitHub:

1. Go to **Actions** tab in your repository
2. Click **Release** workflow
3. Click **Run workflow**
4. Enter the version number (e.g., `1.0.0`)
5. Click **Run workflow**

This will create the tag and release automatically.

### Monitor the GitHub Action

The release workflow will automatically trigger. You can monitor it at:
`https://github.com/YOUR_ORG/TRRAnalytics/actions`

### Verify the Release

After the workflow completes, verify:

- ✅ GitHub Release created with XCFramework zip
- ✅ Artifacts published to GitHub Packages
- ✅ Package.swift updated with new version and checksum

## Consuming the Library

### Android (Gradle)

Add GitHub Packages repository to your `settings.gradle.kts`:

```kotlin
dependencyResolutionManagement {
    repositories {
        maven {
            url = uri("https://maven.pkg.github.com/therealreal/TRRAnalytics")
            credentials {
                username = project.findProperty("gpr.user") as String? ?: System.getenv("GITHUB_ACTOR")
                password = project.findProperty("gpr.token") as String? ?: System.getenv("GITHUB_TOKEN")
            }
        }
    }
}
```

Then add the dependency:

```kotlin
dependencies {
    implementation("com.therealreal.analytics:shared:1.0.0")
}
```

### iOS (Swift Package Manager)

In Xcode:
1. File → Add Package Dependencies
2. Enter repository URL: `https://github.com/therealreal/TRRAnalytics`
3. Select the version you want

Or in `Package.swift`:

```swift
dependencies: [
    .package(url: "https://github.com/therealreal/TRRAnalytics", from: "1.0.0")
]
```

### iOS (Direct XCFramework)

Download the XCFramework from the GitHub Release:
`https://github.com/therealreal/TRRAnalytics/releases/latest`

Then drag `Shared.xcframework` into your Xcode project.

## Version Guidelines

Follow [Semantic Versioning](https://semver.org/):

- **MAJOR** (1.0.0 → 2.0.0): Breaking changes to the API
- **MINOR** (1.0.0 → 1.1.0): New features, backward compatible
- **PATCH** (1.0.0 → 1.0.1): Bug fixes, backward compatible

## Quick Commands

The project includes a **Makefile** with helpful shortcuts:

```bash
make release      # Create a new release (interactive)
make build        # Build Android artifacts
make build-ios    # Build iOS XCFramework
make build-all    # Build everything
make generate     # Generate analytics events
make clean        # Clean build artifacts
make help         # Show all available commands
```

## Troubleshooting

### Release workflow failed

- Check the GitHub Actions logs for errors
- Ensure you have permissions to create releases and publish packages
- Verify the tag follows the `v*` format (e.g., `v1.0.0`)

### Package.swift not updated

The workflow updates Package.swift automatically. If it fails:
- Check if there are merge conflicts on the main branch
- Manually update Package.swift and push the changes

### XCFramework build failed

- Ensure you have Xcode installed (workflow runs on macOS)
- Check that iOS targets are properly configured in build.gradle.kts
