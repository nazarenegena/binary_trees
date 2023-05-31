#include "binary_trees.h"
/**
* binary_tree_insert_right - the node is inserted
* as the right-child of the node.
* @parent: this is a pointer to the node & insert the right-child
* @value: the value that will have to be stored in the new node.
* Return: this points to the newly created node.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *newNode;
if (parent == NULL)
return (NULL);
newNode = binary_tree_node(parent, value);
if (newNode == NULL)
return (NULL);
if (parent->right != NULL)
{
newNode->right = parent->right;
parent->right->parent = newNode;
}
parent->right = newNode;
return (newNode);
}
