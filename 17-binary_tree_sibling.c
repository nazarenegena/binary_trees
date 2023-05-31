#include "binary_trees.h"
/**
* binary_tree_sibling - function searches for node sibling.
* @node: points to the node to search sibling.
* Return: returns value 0 if the node is null.
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);
if (node->parent->left == node)
return (node->parent->right);
return (node->parent->left);
}
