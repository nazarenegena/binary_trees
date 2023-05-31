#include "binary_trees.h"
/**
* binary_tree_height - the binary tress height is measured.
* @tree: the tress points to the root node of the height.
* Return: returns the value 0 if tree is null.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree)
{
size_t treeLeft = 0, treeRight = 0;
treeLeft = tree->left ? 1 + binary_tree_height(tree->left) : 0;
treeRight = tree->right ? 1 + binary_tree_height(tree->right) : 0;
return ((treeLeft > treeRight) ? treeLeft : treeRight);
}
return (0);
}
