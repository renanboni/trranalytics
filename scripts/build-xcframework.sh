#!/bin/bash
set -e

# Build iOS XCFramework with universal simulator support (arm64 + x86_64)
# This script is used by both the Makefile and CI/CD workflows

echo "Building frameworks for all architectures..."
./gradlew :shared:linkReleaseFrameworkIosArm64 :shared:linkReleaseFrameworkIosSimulatorArm64 :shared:linkReleaseFrameworkIosX64

echo "Creating universal simulator framework (arm64 + x86_64)..."
rm -rf shared/build/bin/universal-simulator-release
mkdir -p shared/build/bin/universal-simulator-release
cp -R shared/build/bin/iosSimulatorArm64/releaseFramework/Shared.framework shared/build/bin/universal-simulator-release/

lipo -create \
  shared/build/bin/iosSimulatorArm64/releaseFramework/Shared.framework/Shared \
  shared/build/bin/iosX64/releaseFramework/Shared.framework/Shared \
  -output shared/build/bin/universal-simulator-release/Shared.framework/Shared

echo "Creating XCFramework..."
rm -rf Shared.xcframework
xcodebuild -create-xcframework \
  -framework shared/build/bin/iosArm64/releaseFramework/Shared.framework \
  -framework shared/build/bin/universal-simulator-release/Shared.framework \
  -output Shared.xcframework

echo "✓ XCFramework built at Shared.xcframework (arm64 device + arm64/x86_64 simulator)"
