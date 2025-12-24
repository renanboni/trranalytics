#!/bin/bash
set -e

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

# Get current version from last tag
get_current_version() {
    git fetch --tags 2>/dev/null || true
    CURRENT_TAG=$(git describe --tags --abbrev=0 2>/dev/null || echo "v0.0.0")
    echo "${CURRENT_TAG#v}"
}

# Increment version based on type
increment_version() {
    local version=$1
    local type=$2

    IFS='.' read -r -a parts <<< "$version"
    major="${parts[0]}"
    minor="${parts[1]}"
    patch="${parts[2]}"

    case $type in
        major)
            major=$((major + 1))
            minor=0
            patch=0
            ;;
        minor)
            minor=$((minor + 1))
            patch=0
            ;;
        patch)
            patch=$((patch + 1))
            ;;
        *)
            echo -e "${RED}Invalid version type: $type${NC}"
            exit 1
            ;;
    esac

    echo "$major.$minor.$patch"
}

# Validate version format
validate_version() {
    if [[ ! $1 =~ ^[0-9]+\.[0-9]+\.[0-9]+$ ]]; then
        echo -e "${RED}Invalid version format: $1${NC}"
        echo "Expected format: X.Y.Z (e.g., 1.0.0)"
        exit 1
    fi
}

# Main script
echo -e "${GREEN}=== TRRAnalytics Release Script ===${NC}\n"

# Check if git repo is clean
if [[ -n $(git status -s) ]]; then
    echo -e "${YELLOW}Warning: You have uncommitted changes${NC}"
    git status -s
    echo ""
    read -p "Continue anyway? (y/N) " -n 1 -r
    echo
    if [[ ! $REPLY =~ ^[Yy]$ ]]; then
        exit 1
    fi
fi

# Get current version
CURRENT_VERSION=$(get_current_version)
echo -e "Current version: ${GREEN}$CURRENT_VERSION${NC}\n"

# Ask for version bump type
echo "How do you want to bump the version?"
echo "  1) Patch (bug fixes)          → $(increment_version $CURRENT_VERSION patch)"
echo "  2) Minor (new features)       → $(increment_version $CURRENT_VERSION minor)"
echo "  3) Major (breaking changes)   → $(increment_version $CURRENT_VERSION major)"
echo "  4) Custom version"
echo ""
read -p "Select option (1-4): " -n 1 -r
echo ""

case $REPLY in
    1)
        NEW_VERSION=$(increment_version $CURRENT_VERSION patch)
        ;;
    2)
        NEW_VERSION=$(increment_version $CURRENT_VERSION minor)
        ;;
    3)
        NEW_VERSION=$(increment_version $CURRENT_VERSION major)
        ;;
    4)
        read -p "Enter custom version (e.g., 1.2.3): " NEW_VERSION
        validate_version $NEW_VERSION
        ;;
    *)
        echo -e "${RED}Invalid option${NC}"
        exit 1
        ;;
esac

NEW_TAG="v$NEW_VERSION"

# Confirm
echo ""
echo -e "${YELLOW}Ready to release version ${GREEN}$NEW_VERSION${YELLOW} (tag: $NEW_TAG)${NC}"
echo ""
read -p "Proceed with release? (y/N) " -n 1 -r
echo ""
if [[ ! $REPLY =~ ^[Yy]$ ]]; then
    echo "Release cancelled"
    exit 0
fi

# Create and push tag
echo ""
echo -e "${GREEN}Creating tag $NEW_TAG...${NC}"
git tag -a "$NEW_TAG" -m "Release $NEW_VERSION"

echo -e "${GREEN}Pushing tag to origin...${NC}"
git push origin "$NEW_TAG"

echo ""
echo -e "${GREEN}✓ Release initiated!${NC}"
echo ""
echo "GitHub Actions will now:"
echo "  • Build Android AAR"
echo "  • Build iOS XCFramework"
echo "  • Publish to GitHub Packages"
echo "  • Create GitHub Release"
echo "  • Update Package.swift"
echo ""
echo "Monitor progress at:"
echo "  https://github.com/YOUR_ORG/TRRAnalytics/actions"
echo ""
