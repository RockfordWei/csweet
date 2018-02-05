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
      let result = pluser.add(2)
      switch result {
      case 3:
        print("C++98/03")
        break
      case 14:
        print("C++11")
        break
      default:
        XCTFail("unexpected: \(result)")
      }
    }


    static var allTests = [
        ("testExample", testExample),
    ]
}
