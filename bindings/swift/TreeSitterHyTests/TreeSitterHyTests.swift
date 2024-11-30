import XCTest
import SwiftTreeSitter
import TreeSitterHy

final class TreeSitterHyTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_hy())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Hy grammar")
    }
}
