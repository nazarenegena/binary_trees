#include "binary_trees.h"
/**
* binary_tree_node - a function that creates a binary tree node.
* @parent: the pointer to the parent node.
* @value: the value to be put on new node.
* Return: functions that is a condition statement.
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
/* new node function */
{
binary_tree_t *newNode;
newNode = malloc(sizeof(binary_tree_t));
if (newNode == NULL)
return (NULL);
newNode->n = value;
newNode->parent = parent;
newNode->left = NULL;
newNode->right = NULL;
return (newNode);
}
