// swift-tools-version:5.9
import PackageDescription

let version = "1.0.9"
let checksum = "2d3167d6b4aa0c9584f1b8bb98023ca4db5bfe516f231b7596e107fa50c69686"

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
            url: "https://github.com/TheRealReal/trr-analytics/releases/download/v\(version)/Shared.xcframework.zip",
            checksum: checksum
        )
    ]
)
