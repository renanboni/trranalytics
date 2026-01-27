.PHONY: help release build clean test validate

help: ## Show this help message
	@echo 'Usage: make [target]'
	@echo ''
	@echo 'Available targets:'
	@awk 'BEGIN {FS = ":.*?## "} /^[a-zA-Z_-]+:.*?## / {printf "  %-15s %s\n", $$1, $$2}' $(MAKEFILE_LIST)

release: ## Create a new release (interactive)
	@./scripts/release.sh

build: ## Build the library (Android + iOS)
	@./gradlew :shared:assemble

build-ios: ## Build iOS XCFramework (for local testing)
	@echo "Building frameworks for all architectures..."
	@./gradlew :shared:linkReleaseFrameworkIosArm64 :shared:linkReleaseFrameworkIosSimulatorArm64 :shared:linkReleaseFrameworkIosX64
	@echo "Creating universal simulator framework (arm64 + x86_64)..."
	@rm -rf shared/build/bin/universal-simulator-release
	@mkdir -p shared/build/bin/universal-simulator-release
	@cp -R shared/build/bin/iosSimulatorArm64/releaseFramework/Shared.framework shared/build/bin/universal-simulator-release/
	@lipo -create \
		shared/build/bin/iosSimulatorArm64/releaseFramework/Shared.framework/Shared \
		shared/build/bin/iosX64/releaseFramework/Shared.framework/Shared \
		-output shared/build/bin/universal-simulator-release/Shared.framework/Shared
	@echo "Creating XCFramework..."
	@rm -rf Shared.xcframework
	@xcodebuild -create-xcframework \
		-framework shared/build/bin/iosArm64/releaseFramework/Shared.framework \
		-framework shared/build/bin/universal-simulator-release/Shared.framework \
		-output Shared.xcframework
	@echo "✓ XCFramework built at Shared.xcframework (arm64 device + arm64/x86_64 simulator)"

build-all: ## Build all artifacts (Android + iOS)
	@./gradlew :shared:build

generate: ## Generate analytics events from schemas (Kotlin + TypeScript)
	@./gradlew :shared:generateAnalyticsEvents
	@cp shared/build/generated/source/analytics/typescript/*.ts types/
	@echo "✓ TypeScript types copied to types/"

validate: ## Validate JSON schemas for errors
	@./gradlew :shared:validateSchemas

clean: ## Clean build artifacts
	@./gradlew clean

test: ## Run tests
	@./gradlew test

publish-local: ## Publish to local Maven repository for testing
	@./gradlew :shared:publishToMavenLocal
