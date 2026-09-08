import XCTest
@testable import V1SDK

final class V1SDKTests: XCTestCase {
    func testAcquireIOSymbolIsReachable() throws {
        XCTAssertNotNil(NSClassFromString("AIOApp"))
    }
}
