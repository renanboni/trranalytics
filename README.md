# Analytics Event Kotlin Generator

This project generates Kotlin source files from JSON Schema files laid
out in a simple directory structure. The output is a strongly-typed
builder-style API for analytics events, producing `JsonObject` payloads
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

Optional properties use a builder pattern:

``` kotlin
val e = Purchase.V1.ReturnItem(orderId = "123")
  .reason("damaged")
  .refundAmount(12.34)

val payload = e.payload()
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

Optional (non-required) fields are represented internally as nullable
backing vars, even if the schema type itself is non-null. This allows
the builder pattern to represent "not set".

Fields are only emitted into JSON if set.

------------------------------------------------------------------------

## Running the generator

    <schemasDir> <outDir> [outputPackage]

Example:

``` bash
./gradlew run --args "schemas/ build/generated-src analytics.events"
```

------------------------------------------------------------------------

## Extending the generator

-   Add `$ref` support in `TypeParser`
-   Map schema formats to Kotlin types in `KotlinTypeRenderer`
-   Add org-specific validation passes
-   Add snapshot tests for generated output

------------------------------------------------------------------------

## License

Add your preferred license here.
