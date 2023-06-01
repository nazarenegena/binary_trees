#include "binary_trees.h"
/**
* binary_tree_rotate_left - function performs
* left-rotation on binary tree.
* @tree: points towards the root node.
* Return: points towards new root node.
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
binary_tree_t *newPivot, *newTemp;
if (tree == NULL || tree->right == NULL)
return (NULL);
newPivot = tree->right;
newTemp = newPivot->left;
newPivot->left = tree;
tree->right = newTemp;
if (newTemp != NULL)
newTemp->parent = tree;
newTemp = tree->parent;
tree->parent = newPivot;
newPivot->parent = newTemp;
if (newTemp != NULL)
{
if (newTemp->left == tree)
newTemp->left = newPivot;
else
newTemp->right = newPivot;
}
return (newPivot);
}
