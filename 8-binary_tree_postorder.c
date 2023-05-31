#include "binary_trees.h"
/**
* binary_tree_postorder - the function goes
* via a binary by tree post-order traversal.
* @tree: the tree points to the root node to traverse.
* @func: the function points to the call for each node.
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree && func)
{
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
}
