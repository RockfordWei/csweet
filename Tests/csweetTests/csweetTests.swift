import XCTest
@testable import csweet

public class CPluser {
  let ref: UnsafeMutableRawPointer
  public init(_ seed: Int32) {
    ref = CPluser_new(seed)
  }
  deinit {
      CPluser_del(ref)
  }
  public func add(_ with: Int32) -> Int32 {
    return CPluser_add(ref, with)
  }
}

class csweetTests: XCTestCase {
    func testExample() {
      let pluser = CPluser(1)
      let three = pluser.add(2)
      print(three, 3)
      XCTAssertEqual(three, 3)
    }


    static var allTests = [
        ("testExample", testExample),
    ]
}
