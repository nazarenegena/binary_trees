#include "binary_trees.h"
/**
* binary_tree_rotate_right - function performs a right-rotation
* on a binary tree.
* @tree: points toward the root node rotating.
* Return: returns value pointer to the new root node.
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
binary_tree_t *newPivot, *newTemp;
if (tree == NULL || tree->left == NULL)
return (NULL);
newPivot = tree->left;
newTemp = newPivot->right;
newPivot->right = tree;
tree->left = newTemp;
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
