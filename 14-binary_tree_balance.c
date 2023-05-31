#include "binary_trees.h"
/**
* binary_tree_balance - the binary tree is measured for balance factor.
*
* @tree: points node root tree to measure  balance factor.
*
* Return: returns value 0 if the tree is null.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree)
return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
return (0);
}
/**
* binary_tree_height - the binary tree is measured for height.
*
* @tree: points node root tree to measure height.
*
* Return: returns value 0 if the tree is null.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree)
{
size_t leftNode = 0, rightNode = 0;
leftNode = tree->left ? 1 + binary_tree_height(tree->left) : 1;
rightNode = tree->right ? 1 + binary_tree_height(tree->right) : 1;
return ((leftNode > rightNode) ? leftNode : rightNode);
}
return (0);
}
