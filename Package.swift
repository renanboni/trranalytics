// swift-tools-version:5.9
import PackageDescription

let version = "1.0.3"
let checksum = "0000000000000000000000000000000000000000000000000000000000000000"

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
