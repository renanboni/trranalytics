# Release Guide

Complete guide for releasing TRRAnalytics with automated versioning and distribution.

## Quick Start

To create a new release, simply run:

```bash
make release
```

That's it! The interactive script will guide you through the rest.

---

## Table of Contents

- [How Releases Work](#how-releases-work)
- [Release Methods](#release-methods)
- [Quick Commands](#quick-commands)
- [What Gets Published](#what-gets-published)
- [Installation Guide](#installation-guide)
- [Versioning Guidelines](#versioning-guidelines)
- [Troubleshooting](#troubleshooting)

---

## How Releases Work

The project uses **Git tags** to trigger automated releases via GitHub Actions.

When you create a release (via any method), the workflow automatically:

1. ✅ Generates analytics events from schemas
2. ✅ Builds Android artifacts (AAR)
3. ✅ Builds iOS XCFramework
4. ✅ Publishes to GitHub Packages (Maven)
5. ✅ Creates a GitHub Release with XCFramework
6. ✅ Updates Package.swift for Swift Package Manager
7. ✅ Generates changelog from git commits
8. ✅ Sends Slack notification (if configured)

**No manual version management needed** - the tools handle everything!

> 💬 **Want Slack notifications?** See [Slack Setup Guide](.github/SLACK_SETUP.md) to receive release notifications in your team channel.

---

## Release Methods

Choose whichever method works best for you:

### Method 1: Interactive Script (Recommended)

The easiest way - use the automated release script:

```bash
make release
```

**What happens:**
```
Current version: 1.2.3

How do you want to bump the version?
  1) Patch (bug fixes)          → 1.2.4
  2) Minor (new features)       → 1.3.0
  3) Major (breaking changes)   → 2.0.0
  4) Custom version

Select option (1-4): _
```

The script will:
- Show your current version
- Prompt for version bump type
- Validate the version
- Create and push the tag
- Trigger the release workflow

### Method 2: GitHub UI

Release directly from GitHub without terminal access:

1. Go to your repository's **Actions** tab
2. Select **Release** workflow in the sidebar
3. Click **Run workflow** button
4. Enter version number (e.g., `1.0.0`)
5. Click green **Run workflow** button

GitHub Actions will create the tag and build everything automatically.

### Method 3: Manual Git Tag

For advanced users who prefer manual control:

```bash
# Ensure all changes are committed
git add .
git commit -m "Prepare for release"
git push origin main

# Create and push version tag (must start with 'v')
git tag v1.2.4
git push origin v1.2.4
```

The `v` prefix is required (e.g., `v1.0.0`, not `1.0.0`).

---

## Quick Commands

The project includes a **Makefile** with convenient shortcuts:

| Command | Description |
|---------|-------------|
| `make release` | 🚀 Create a new release (interactive) |
| `make build` | Build Android artifacts |
| `make build-ios` | Build iOS XCFramework |
| `make build-all` | Build all artifacts (Android + iOS) |
| `make generate` | Generate analytics events from schemas |
| `make clean` | Clean build artifacts |
| `make test` | Run tests |
| `make help` | Show all available commands |

---

## What Gets Published

After a successful release, the following artifacts are available:

### Android (GitHub Packages)
- **Maven coordinates**: `com.therealreal.analytics:shared:VERSION`
- **Repository**: `https://maven.pkg.github.com/YOUR_ORG/TRRAnalytics`
- **Format**: AAR with sources

### iOS (GitHub Releases + SPM)
- **XCFramework**: Available as release asset (`.zip`)
- **Swift Package Manager**: Automatically updated via `Package.swift`
- **Architectures**: `iosArm64` (device) + `iosSimulatorArm64` (simulator)

### Release Notes
- Changelog automatically generated from git commits since last release

---

## Installation Guide

How consumers integrate the library into their projects:

### Android (Gradle)

Add GitHub Packages repository to `settings.gradle.kts`:

```kotlin
dependencyResolutionManagement {
    repositories {
        maven {
            url = uri("https://maven.pkg.github.com/YOUR_ORG/TRRAnalytics")
            credentials {
                username = project.findProperty("gpr.user") as String?
                    ?: System.getenv("GITHUB_ACTOR")
                password = project.findProperty("gpr.token") as String?
                    ?: System.getenv("GITHUB_TOKEN")
            }
        }
    }
}
```

Add dependency to `build.gradle.kts`:

```kotlin
dependencies {
    implementation("com.therealreal.analytics:shared:1.0.0")
}
```

**Note**: GitHub Packages requires authentication. Users need a GitHub token with `read:packages` permission.

### iOS (Swift Package Manager)

**Option A: Xcode UI**
1. File → Add Package Dependencies
2. Enter URL: `https://github.com/YOUR_ORG/TRRAnalytics`
3. Select version or branch
4. Click Add Package

**Option B: Package.swift**

```swift
dependencies: [
    .package(url: "https://github.com/YOUR_ORG/TRRAnalytics", from: "1.0.0")
]
```

**Option C: Direct XCFramework**

Download from releases and drag into Xcode:
```
https://github.com/YOUR_ORG/TRRAnalytics/releases/latest
```

---

## Versioning Guidelines

This project follows [Semantic Versioning](https://semver.org/) (SemVer):

```
MAJOR.MINOR.PATCH
```

### When to bump each component:

| Type | When to Use | Example |
|------|-------------|---------|
| **PATCH** | Bug fixes, no API changes | `1.0.0` → `1.0.1` |
| **MINOR** | New features, backward compatible | `1.0.1` → `1.1.0` |
| **MAJOR** | Breaking changes, incompatible API | `1.1.0` → `2.0.0` |

### Examples:

- ✅ **Patch (1.0.0 → 1.0.1)**: Fix null pointer in event serialization
- ✅ **Minor (1.0.0 → 1.1.0)**: Add new event type `UserLogin`
- ✅ **Major (1.0.0 → 2.0.0)**: Rename `properties()` to `getProperties()`

---

## Monitoring Releases

### GitHub Actions

Monitor release progress:
```
https://github.com/YOUR_ORG/TRRAnalytics/actions
```

The workflow typically takes **3-5 minutes** to complete.

### Verify Release Success

After workflow completes, check:

1. ✅ **GitHub Release** created with release notes
2. ✅ **XCFramework zip** attached to release
3. ✅ **Maven artifacts** published to GitHub Packages
4. ✅ **Package.swift** updated with new version + checksum

---

## Troubleshooting

### Release workflow failed

**Check:**
- GitHub Actions logs for specific error
- Repository permissions (Settings → Actions → General)
- Tag follows correct format (`v1.0.0`, not `1.0.0`)

**Common causes:**
- Missing `GITHUB_TOKEN` permissions
- Gradle build failures
- Network issues during publish

### Tag already exists

If you see `tag already exists` error:

```bash
# Delete local tag
git tag -d v1.0.0

# Delete remote tag
git push origin :refs/tags/v1.0.0

# Try release again
make release
```

### Package.swift not updated

The workflow auto-updates `Package.swift`. If it fails:

1. Check for merge conflicts on main branch
2. Manually update version and checksum in `Package.swift`
3. Commit and push changes

### XCFramework build failed

**Requirements:**
- Workflow runs on macOS (GitHub-hosted runner)
- Xcode installed (automatically available)
- iOS targets configured in `build.gradle.kts`

**Check:**
- iOS framework configuration in `shared/build.gradle.kts`
- Valid framework name and bundle ID
- Gradle iOS plugin version

### Authentication issues (Android)

GitHub Packages requires authentication:

```bash
# Generate token at: https://github.com/settings/tokens
# Requires: read:packages, write:packages (for publishing)

export GITHUB_ACTOR="your-username"
export GITHUB_TOKEN="ghp_your_token_here"
```

Or add to `~/.gradle/gradle.properties`:
```properties
gpr.user=your-username
gpr.token=ghp_your_token_here
```

---

## First-Time Setup

Before your first release, update these files with your actual repository URLs:

**Files to update:**
- `shared/build.gradle.kts` - Maven repository URLs
- `Package.swift` - XCFramework download URL
- `RELEASING.md` - Documentation URLs (this file)
- `README.md` - Installation instructions

**Find and replace:**
```
YOUR_ORG/TRRAnalytics → your-org/your-repo-name
therealreal/TRRAnalytics → your-org/your-repo-name
```

### Optional: Slack Notifications

Set up Slack notifications to get notified when releases complete:

1. Follow the [Slack Setup Guide](.github/SLACK_SETUP.md)
2. Add `SLACK_WEBHOOK_URL` secret to your repository
3. Releases will automatically notify your team channel

If you don't configure Slack, the workflow will still work - notifications are optional.

---

## Questions?

- **Workflow logs**: Check GitHub Actions for detailed error messages
- **Version conflicts**: Ensure tag doesn't already exist
- **Authentication**: Verify GitHub token has correct permissions
- **Build issues**: Run `make build-all` locally first to test

For more help, see the [README.md](README.md) or open an issue.
