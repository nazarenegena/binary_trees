#include "binary_trees.h"
/**
* binary_tree_is_root - this is the root checker for a given node.
* @node: the node pointer to check.
* Return: returns 1 if the node is a root or else return 0.
*/
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL || node->parent != NULL)
return (0);
return (1);
}
