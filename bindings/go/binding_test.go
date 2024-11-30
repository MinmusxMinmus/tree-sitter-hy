package tree_sitter_hy_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_hy "github.com/minmusxminmus/tree-sitter-hy/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_hy.Language())
	if language == nil {
		t.Errorf("Error loading Hy grammar")
	}
}
