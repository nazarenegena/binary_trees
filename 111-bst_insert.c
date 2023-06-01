#include "binary_trees.h"
/**
* bst_insert - function inserts a value.
* in the Binary Search Tree.
* @value: the value to store in the node is inserted.
* @tree: points twice to the root node.
* Return: return value 0 if success.
*/
bst_t *bst_insert(bst_t **tree, int value)
{
bst_t *auxNode = NULL;
if (tree == NULL)
return (NULL);
if (*tree == NULL)
{
*tree = binary_tree_node(NULL, value);
return (*tree);
}
auxNode = *tree;
if (value < auxNode->n)
{
if (auxNode->left == NULL)
{
auxNode->left = binary_tree_node(auxNode, value);
return (auxNode->left);
}
return (bst_insert(&(auxNode->left), value));
}
if (value > auxNode->n)
{
if (auxNode->right == NULL)
{
auxNode->right = binary_tree_node(auxNode, value);
return (auxNode->right);
}
return (bst_insert(&(auxNode->right), value));
}
return (NULL);
}
