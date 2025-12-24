# Analytics Event Kotlin Generator

This project generates Kotlin Multiplatform source files from JSON Schema files laid
out in a simple directory structure. The output is a strongly-typed
API for analytics events, producing `JsonObject` payloads
via `kotlinx.serialization.json`.

The generator is intentionally strict and focused on a small JSON Schema
subset that matches typical analytics event schemas.

------------------------------------------------------------------------

## What it generates

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

    <schemasDir> <outDir> [outputPackage]

Example:

``` bash
./gradlew run --args "schemas/ build/generated-src analytics.events"
```

------------------------------------------------------------------------

