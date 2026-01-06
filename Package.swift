// swift-tools-version:5.9
import PackageDescription

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
            path: "Shared.xcframework"
        )
    ]
)
