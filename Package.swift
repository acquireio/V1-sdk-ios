// swift-tools-version: 5.10
import PackageDescription

let package = Package(
    name: "V1SDK",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "V1SDK",
            targets: ["V1SDK"]
        )
    ],
    targets: [
        .target(
            name: "V1SDK"
        ),
        .testTarget(
            name: "V1SDKTests",
            dependencies: ["V1SDK"]
        )
    ]
)
