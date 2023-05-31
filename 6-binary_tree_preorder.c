#include "binary_trees.h"
/**
* binary_tree_preorder - the pre-order traversal binary tree.
* @tree: this is a pointer to the tree root node to be traversed.
* @func: this is a pointer to the call for each node.
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree && func)
{
func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
}
