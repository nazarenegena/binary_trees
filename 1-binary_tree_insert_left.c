#include "binary_trees.h"
/**
* binary_tree_insert_left - a function that inserts the node
* as left-child of another node.
* @parent: points to the node that inserts the left child.
* @value: the value that stores the new node.
* Return: returns a pointer to the created node if null/failure.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *newNode;
if (parent == NULL)
return (NULL);
newNode = binary_tree_node(parent, value);
if (newNode == NULL)
return (NULL);
if (parent->left != NULL)
{
newNode->left = parent->left;
parent->left->parent = newNode;
}
parent->left = newNode;
return (newNode);
}
