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
	@./scripts/build-xcframework.sh

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
