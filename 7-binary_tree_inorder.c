#include "binary_trees.h"
/**
* binary_tree_inorder - traverses through a binary tree.
* @tree: this points to the root node to be traversed.
* @func: this is a pointer to a function to call for each node.
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree && func)
{
binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}
}

