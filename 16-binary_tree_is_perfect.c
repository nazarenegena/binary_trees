#include "binary_trees.h"
int binary_tree_is_perfect(const binary_tree_t *tree);
size_t depth(const binary_tree_t *tree);
unsigned char is_leaf(const binary_tree_t *node);
int is_perfect_recursive(const binary_tree_t *tree,
size_t leaf_depth, size_t level);
const binary_tree_t *get_leaf(const binary_tree_t *tree);
/**
* binary_tree_is_perfect - function checks for a perfect binary tree.
*
* @tree: points to check the root node of the tree.
*
* Return: returns value 0 if tree is null.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
return (is_perfect_recursive(tree, depth(get_leaf(tree)), 0));
}
/**
* depth - the function returns the depth of a node.
* @tree: points to the node to measure depth.
* Return: returns the depth of the node.
*/
size_t depth(const binary_tree_t *tree)
{
return (tree->parent != NULL ? 1 + depth(tree->parent) : 0);
}
/**
* get_leaf - gets the leaf of the binary tree.
* @tree: points to the root node of the tree to find a leaf.
* Return: points to the first encountered leaf.
*/
const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
if (is_leaf(tree) == 1)
return (tree);
return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}
/**
* is_perfect_recursive - the function returns the depth of a node
* @tree: points to check the root node of the tree
* @level: checks the level of the current node
* @leaf_depth: points to the depth of one leaf in binary tree
* Return: returns value of the tree
* if perfect value is 1, otherwise 0
*/
int is_perfect_recursive(const binary_tree_t *tree,
size_t leaf_depth, size_t level)
{
if (is_leaf(tree))
return (level == leaf_depth ? 1 : 0);
if (tree->left == NULL || tree->right == NULL)
return (0);
return (is_perfect_recursive(tree->left, leaf_depth, level + 1) &&
is_perfect_recursive(tree->right, leaf_depth, level + 1));
}
/**
* is_leaf - function checks if the node is a leaf of a binary tree.
* @node: the node points to be checked.
* Return: the value returned checks if the node is a leaf,
* returns 1 if true, otherwise returns value 0.
*/
unsigned char is_leaf(const binary_tree_t *node)
{
return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}
