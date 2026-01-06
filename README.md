# Analytics Event Kotlin Generator

This project generates Kotlin Multiplatform source files and TypeScript types from JSON Schema files laid
out in a simple directory structure. The output is a strongly-typed
API for analytics events, producing `JsonObject` payloads
via `kotlinx.serialization.json`.

The generator is intentionally strict and focused on a small JSON Schema
subset that matches typical analytics event schemas.

------------------------------------------------------------------------

## Supported Platforms

- **Android** - Kotlin/JVM via Gradle
- **iOS** - Kotlin/Native via XCFramework and Swift Package Manager
- **Web** - Generated TypeScript type definitions

------------------------------------------------------------------------

## What it generates

### Kotlin (for Android and iOS)

For each **family**, the generator outputs a single Kotlin file:

-   `Purchase.kt`
-   `Signup.kt`
-   etc.

Each family file contains:

-   a sealed interface `FamilyName : AnalyticsEvent`
-   per-version container objects (`V1`, `V2`, ...)
-   event classes (one per schema)
-   nested classes/enums for nested object/enum types

Events implement:

-   `eventName: String`
-   `schemaVersion: Int`
-   `properties(): JsonObject`
-   `payload(): JsonObject` (includes `event`, `schemaVersion`,
    `properties`)

------------------------------------------------------------------------

## Usage Examples

### Kotlin (Android)

All properties (required and optional) are passed as constructor parameters. Optional properties default to `null`:

``` kotlin
import analytics.events.Purchase
import com.therealreal.analytics.events.propertiesMap

// Create an event with required and optional properties
val event = Purchase.V1.RefundRequested(
    amount = 100.0,
    orderId = "ORDER-123",
    reason = "damaged"  // optional
)

// Get properties as Map<String, Any> for tracking
val properties: Map<String, Any?> = event.propertiesMap()
trackEvent(event.eventName, properties)

// Or use the JsonObject directly
val payload = event.payload()
```

### Swift (iOS)

The same events work seamlessly in Swift:

``` swift
import Shared

// Create an event
let event = PurchaseV1.RefundRequested(
    amount: 100.0,
    orderId: "ORDER-123",
    reason: "damaged"  // optional
)

// Get properties as [String: AnyHashable] for tracking
let properties = event.propertiesMap()
Analytics.track(event.eventName, properties: properties)

// Or use the JsonObject if needed
let payload = event.payload()
```

### TypeScript (Web)

The generated TypeScript types provide compile-time type safety without runtime overhead:

``` typescript
import { Seller } from './generated/analytics';

// Type-safe event creation
const event: Seller.V1.ConsignmentHome = {
  eventName: "consignment_home",
  schemaVersion: 1,
  loggedIn: true,
  repeatConsignor: false
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
        v<version>/
          <event>.json

Examples:

    schemas/
      purchase/
        v1/
          return_item.json
          checkout_started.json
      signup/
        v2/
          completed.json

Naming rules:

-   `family` folder becomes a PascalCase Kotlin type: `purchase` →
    `Purchase`
-   `v1` becomes `V1`, `v2` becomes `V2`
-   file name becomes event class name: `return_item.json` →
    `ReturnItem`

------------------------------------------------------------------------

## Supported JSON Schema subset

### Types

-   `type: "object"`, `"string"`, `"number"`, `"integer"`, `"boolean"`,
    `"array"`
-   Nullable variants via `type: ["null", "<type>"]`

### Objects

-   `properties` is required for objects
-   `required` is supported
-   `additionalProperties` is not enforced but the generator will warn
    if it isn't `false`

### Arrays

-   `type: "array"` with `items` required
-   arrays of primitives, enums, or objects are supported
-   arrays of arrays are **not** supported

### Enums

-   `type: "string"` + `enum: [...]` generates a Kotlin `enum class`
-   enums are emitted as `.name` into JSON

### Event name

Resolved in order: 1. `x-eventName` 2. `title` 3. `<family>_<filename>`

------------------------------------------------------------------------

## Unsupported schema features

-   `$ref`
-   `oneOf`, `anyOf`, `allOf`
-   top-level arrays
-   array of array
-   advanced validation keywords

------------------------------------------------------------------------

## How it works (architecture)

**CLI** - argument parsing - orchestration - error reporting

**IO** - deterministic schema discovery - Kotlin file writing

**Schema parsing** - path-based family/version resolution - strict JSON
Schema parsing - name de-duplication for nested types

**Model** - sealed `Type` hierarchy - explicit `Field` definitions -
parsed `EventDef`

**Emission** - family-level generation - per-event class generation -
nested enums and objects - JSON builders

------------------------------------------------------------------------

## Optional fields and nullability

Optional (non-required) fields are represented as nullable constructor parameters
with default values of `null`. Even if the schema type itself is non-null,
optional fields become nullable in the generated Kotlin code.

Fields are only emitted into JSON if they are not `null`.

------------------------------------------------------------------------

## Running the generator

CLI arguments:

    <schemasDir> <kotlinOutDir> [typeScriptOutDir] [outputPackage]

Examples:

``` bash
# Generate Kotlin only
./gradlew run --args "schemas/ build/generated-src"

# Generate both Kotlin and TypeScript
./gradlew run --args "schemas/ build/generated-kotlin build/generated-typescript analytics.events"

# Using Make
make generate
```

### Generated output locations

After running `make generate`:

- **Kotlin**: `shared/build/generated/source/analytics/commonMain/kotlin/`
- **TypeScript**: `shared/build/generated/source/analytics/typescript/`

------------------------------------------------------------------------

