# V1SDK

A Swift Package for iOS that bundles the AcquireIO, AcquireIOSockets, and WebRTC xcframeworks behind a single `V1SDK` module.

## Requirements

- iOS 12.0+
- Swift tools 5.10+

## Installation

### Swift Package Manager

Add this package to your `Package.swift` dependencies:

```swift
dependencies: [
    .package(url: "<repository-url>", from: "1.0.0")
]
```

Or in Xcode: **File > Add Package Dependencies...** and enter the repository URL.

## Usage

Import `V1SDK` to get access to `AcquireIO`, `AcquireIOSockets`, and `WebRTC`:

```swift
import V1SDK
```

### Objective-C

Import `AcquireIO` and conform your `AppDelegate` to `AcquireIODelegate`:

```objc
#import <AcquireIO/AcquireIO.h>

@interface AppDelegate () <AcquireIODelegate>
@end
```

Set up the SDK in `application:didFinishLaunchingWithOptions:`:

```objc
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {

    [[AcquireIO support] addDelegate:self];

    AcquireIOConfig *config = [AcquireIOConfig config];
    config.sessionConnectAndStartAuto = YES; // default
    config.buttonImageName = @"chat"; // chat widget launcher icon (chat@2x.png)

    [[AcquireIO support] setAccount:@"5d03c" withOptions:config];

    // Override point for customization after application launch.
    return YES;
}
```

Implement the delegate callback to observe connection status changes:

```objc
- (void)didChangeConnectionStatus:(AcquireIOConnectionStatus)status {
    NSLog(@"didChangeConnectionStatus %ld", (long)status);
}
```

## Project Structure

```
Frameworks/          Prebuilt .xcframework binaries (AcquireIO, AcquireIOSockets, WebRTC)
Sources/V1SDK/       V1SDK module source (re-exports the bundled frameworks)
Tests/V1SDKTests/    Unit tests
```

## Testing

```sh
swift test
```
