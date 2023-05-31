#include "binary_trees.h"
/**
* binary_tree_nodes - this binary trees counts the nodes.
* @tree: this points to the root node of the tree.
* Return: returns value of 0 if tree is null.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t newNodes = 0;
if (tree)
{
newNodes += (tree->left || tree->right) ? 1 : 0;
newNodes += binary_tree_nodes(tree->left);
newNodes += binary_tree_nodes(tree->right);
}
return (newNodes);
}
