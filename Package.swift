// swift-tools-version: 5.10
import PackageDescription

let package = Package(
    name: "V1SDK",
    platforms: [
        .iOS(.v12)
    ],
    products: [
        .library(
            name: "V1SDK",
            targets: ["V1SDK"]
        )
    ],
    targets: [
        .target(
            name: "V1SDK",
            dependencies: [
                "AcquireIO",
                "AcquireIOSockets",
                "WebRTC"
            ],
            linkerSettings: [
                .unsafeFlags(["-ObjC"])
            ]
        ),
        .testTarget(
            name: "V1SDKTests",
            dependencies: ["V1SDK"]
        ),
        .binaryTarget(
            name: "AcquireIO",
            path: "Frameworks/AcquireIO.xcframework"
        ),
        .binaryTarget(
            name: "AcquireIOSockets",
            path: "Frameworks/AcquireIOSockets.xcframework"
        ),
        .binaryTarget(
            name: "WebRTC",
            path: "Frameworks/WebRTC.xcframework"
        )
    ]
)
