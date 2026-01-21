# TRRAnalytics

A Kotlin Multiplatform library that generates type-safe analytics events from JSON Schema files. Define events once, use them across Android, iOS, and Web with full type safety.

------------------------------------------------------------------------

## Supported Platforms

- **Android** - Kotlin/JVM via Gradle
- **iOS** - Kotlin/Native via XCFramework and Swift Package Manager
- **Web** - Generated TypeScript type definitions

------------------------------------------------------------------------

## What it generates

### Kotlin (for Android and iOS)

For each **family**, the generator outputs a single Kotlin file:

-   `Seller.kt`
-   `Buyer.kt`
-   etc.

Each family file contains:

-   a sealed interface `FamilyName : AnalyticsEvent`
-   event data classes (one per schema)
-   nested classes/enums for nested object/enum types
-   secondary constructors for iOS compatibility

Events implement:

-   `eventName: String`
-   `properties(): Map<String, Any?>`
-   `payload(): Map<String, Any?>`

------------------------------------------------------------------------

## Usage Examples

### Kotlin (Android)

All properties (required and optional) are passed as constructor parameters. Optional properties default to `null`:

```kotlin
import analytics.events.Seller

// Create an event with required and optional properties
val event = Seller.ConsignmentHome(
    loggedIn = true,
    repeatConsignor = false,
    utmSource = "google"  // optional
)

// Get properties as Map<String, Any?> for tracking
val properties = event.properties()
trackEvent(event.eventName, properties)

// Or use the full payload
val payload = event.payload()
```

### Swift (iOS)

The same events work seamlessly in Swift. Secondary constructors allow you to omit optional parameters:

```swift
import Shared

// Create an event with only required fields
let event = Seller.ConsignmentHome(
    loggedIn: true,
    repeatConsignor: false
)

// Or with optional UTM params
let eventWithUtm = Seller.ConsignmentHome(
    loggedIn: true,
    repeatConsignor: false,
    utmSource: "google",
    utmMedium: "cpc",
    utmCampaign: "summer"
)

// Track the event
Analytics.track(event.eventName, properties: event.properties())
```

### TypeScript (Web)

The generated TypeScript types provide compile-time type safety:

```typescript
import { Seller } from '@therealreal/analytics-types';

// Type-safe event creation
const event: Seller.ConsignmentHome = {
  eventName: "Consignment Home",
  loggedIn: true,
  repeatConsignor: false,
  utmSource: "google"  // optional
};

// Track with your analytics provider
analytics.track(event.eventName, event);
```

------------------------------------------------------------------------

## Installation

### Android (Gradle)

Add GitHub Packages repository and dependency:

```kotlin
// settings.gradle.kts
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

// build.gradle.kts
dependencies {
    implementation("com.therealreal.analytics:shared:1.0.0")
}
```

### iOS (Swift Package Manager)

Add package dependency in Xcode or Package.swift:

```swift
dependencies: [
    .package(url: "https://github.com/therealreal/TRRAnalytics", from: "1.0.0")
]
```

### Web (TypeScript)

Add the package as a git dependency in your `package.json`:

```json
{
  "dependencies": {
    "@therealreal/analytics-types": "github:therealreal/TRRAnalytics#main&path=types"
  }
}
```

Then run:

```bash
yarn install
# or
npm install
```

Import and use the types:

```typescript
import { Seller, AnalyticsEvent } from '@therealreal/analytics-types';
```

See [RELEASING.md](RELEASING.md) for more details.

------------------------------------------------------------------------

## Schema layout convention

Schemas must be stored as:

    <schemasDir>/
      <family>/
        <event>.json

Examples:

    schemas/
      _common/
        base_fields.json      # shared fields added to all events
      seller/
        consignment_home.json
        form_started.json
      buyer/
        product_viewed.json

Naming rules:

-   `family` folder becomes a PascalCase Kotlin type: `seller` → `Seller`
-   file name becomes event class name: `consignment_home.json` → `ConsignmentHome`
-   Event names and property names must use `snake_case`

------------------------------------------------------------------------

## Common Fields

Define shared fields once in `schemas/_common/base_fields.json`. These fields are automatically added to all events as optional properties.

```json
{
  "description": "Common optional fields added to all analytics events",
  "properties": {
    "utm_source": {
      "type": ["string", "null"],
      "description": "UTM source parameter for campaign tracking"
    },
    "utm_medium": {
      "type": ["string", "null"],
      "description": "UTM medium parameter for campaign tracking"
    },
    "utm_campaign": {
      "type": ["string", "null"],
      "description": "UTM campaign parameter for campaign tracking"
    }
  }
}
```

------------------------------------------------------------------------

## Schema Evolution Guidelines

Events evolve through **additive changes only**. This ensures backward compatibility without versioning complexity.

### Allowed changes

| Change | Why it's safe |
|--------|---------------|
| Add a new **optional** property | Old code ignores it |
| Add a new **event** | Old code doesn't use it |
| Add new enum values | Old code ignores unknown values |
| Change description/docs | No runtime impact |

### Not allowed (would require a new event)

| Change | Why it breaks |
|--------|---------------|
| **Remove** a property | Old code still tries to send it |
| **Rename** a property | Old code sends wrong key |
| Add a new **required** property | Old code doesn't send it |
| Change property **type** | Type mismatch (string → number) |

### Rule of thumb

> "Can old code still work if I make this change?"
> - **Yes** → make the change
> - **No** → create a new event instead

------------------------------------------------------------------------

## Schema Validation

Run the validator to check schemas for errors before generating code:

```bash
make validate
# or
./gradlew :shared:validateSchemas
```

The validator checks for:

| Check | Severity |
|-------|----------|
| Missing `type` field | Error |
| Invalid type values | Error |
| Unsupported keywords (`$ref`, `oneOf`, etc.) | Error |
| Required fields not in properties | Error |
| Event names not in snake_case | Error |
| Property names not in snake_case | Error |
| Missing `items` for arrays | Error |
| Nested arrays | Error |

Validation runs automatically before code generation.

------------------------------------------------------------------------

## Example Schema

```json
{
  "eventName": "consignment_home",
  "type": "object",
  "required": ["logged_in", "repeat_consignor"],
  "properties": {
    "logged_in": {
      "type": "boolean"
    },
    "repeat_consignor": {
      "type": "boolean"
    }
  }
}
```

------------------------------------------------------------------------

## Supported JSON Schema subset

### Types

-   `type: "object"`, `"string"`, `"number"`, `"integer"`, `"boolean"`, `"array"`
-   Nullable variants via `type: ["null", "<type>"]`

### Objects

-   `properties` is required for objects
-   `required` array specifies mandatory fields

### Arrays

-   `type: "array"` with `items` required
-   arrays of primitives, enums, or objects are supported
-   arrays of arrays are **not** supported

### Enums

-   `type: "string"` + `enum: [...]` generates a Kotlin `enum class`

### Event name

Resolved in order: 1. `eventName` 2. `title` 3. filename

------------------------------------------------------------------------

## Unsupported schema features

-   `$ref`
-   `oneOf`, `anyOf`, `allOf`
-   top-level arrays
-   array of array
-   advanced validation keywords

------------------------------------------------------------------------

## Running the generator

```bash
# Generate Kotlin and TypeScript
make generate

# Validate schemas only
make validate

# Build iOS XCFramework
make build-ios

# Create a release
make release
```

### Generated output locations

After running `make generate`:

- **Kotlin**: `shared/build/generated/source/analytics/commonMain/kotlin/`
- **TypeScript**: `types/`

------------------------------------------------------------------------
