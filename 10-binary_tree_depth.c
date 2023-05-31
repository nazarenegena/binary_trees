#include "binary_trees.h"
/**
* binary_tree_depth - the function measures a depth node in a binary tree.
* @tree: points to the node measuring the depth.
* Return: returns the value 0 if the tree is NULL.
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
