package tree_sitter_nunjucks_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/rowellx68/tree-sitter-nunjucks"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_nunjucks.Language())
	if language == nil {
		t.Errorf("Error loading Nunjucks grammar")
	}
}
