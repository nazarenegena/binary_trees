#include "binary_trees.h"
/**
* find_node - the function searches for node in a tree.
* @node: node to look for.
* @root: tree route for evaluation.
* Return: returns value 1
* otherwise value 0 if no
*/
int find_node(binary_tree_t *root, binary_tree_t *node)
{
if (root == NULL)
return (0);
if (node == root)
return (1);
if (node->n < root->n)
return (find_node(root->left, node));
if (node->n > root->n)
return (find_node(root->right, node));
return (0);
}
/**
* cross_tree - the function crosses the tree checking.
* @node: the current node to be evaluated
* @root: the binary tree tree root node
* Return: value 1.
*/
int cross_tree(binary_tree_t *root, binary_tree_t *node)
{
if (root && node)
{
int aux = 0;
aux = find_node(root, node);
if (node->left)
aux &= cross_tree(root, node->left);
if (node->right)
aux &= cross_tree(root, node->right);
return (aux);
}
return (0);
}
/**
* binary_tree_is_bst - the function checks correct tree
* @tree: the tree to check
* Return: return value 1 if binart tree
* return value 0 if not.
*/
int binary_tree_is_bst(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
return (cross_tree((binary_tree_t *)tree, (binary_tree_t *)tree));
}
