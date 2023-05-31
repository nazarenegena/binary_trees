#include "binary_trees.h"
/**
* binary_tree_leaves - the binary tree is counted.
* @tree: the root node points to the counter of the number of leaves.
* Return: the value 0 is if tree is null is returned.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t nodeLeaves = 0;
if (tree)
{
nodeLeaves += (!tree->left && !tree->right) ? 1 : 0;
nodeLeaves += binary_tree_leaves(tree->left);
nodeLeaves += binary_tree_leaves(tree->right);
}
return (nodeLeaves);
}
