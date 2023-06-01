#include "binary_trees.h"
/**
* bst_search -function that searches for node in a tree.
* @value: node to be searched.
* @tree: the tree root to evaluate.
* Return: returns value 1 if exits
* otherwise return value 0 if null
*/
bst_t *bst_search(const bst_t *tree, int value)
{
if (tree == NULL)
return (NULL);
if (value == tree->n)
return ((bst_t *)tree);
if (value < tree->n)
return (bst_search(tree->left, value));
else
return (bst_search(tree->right, value));
return (NULL);
}
