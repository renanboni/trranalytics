// swift-tools-version:5.9
import PackageDescription

let version = "1.0.6"
let checksum = "bd545a7c9aaeb4b97c5e8ee6703a5d41cb51ada0dc34d51588b955aa943243f5"

let package = Package(
    name: "TRRAnalytics",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "TRRAnalytics",
            targets: ["Shared"]
        )
    ],
    targets: [
        .binaryTarget(
            name: "Shared",
            url: "git@github.com:TheRealReal/trr-analytics/releases/download/v\(version)/Shared.xcframework.zip",
            checksum: checksum
        )
    ]
)
