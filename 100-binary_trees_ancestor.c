#include "binary_trees.h"
/**
* binary_trees_ancestor - function finds.
* the lowest common ancestor of two nodes.
* @first: points to the first node.
* @second: points to the second node.
* Return: points to the lowest common ancestor's node
* of the two nodes.
* returns null if no common ancestor is found
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
binary_tree_t *sec, *fir;
if (!first || !second)
return (NULL);
if (first == second)
return ((binary_tree_t *)first);
sec = first->parent, fir = second->parent;
if (first == fir || !sec || (!sec->parent && fir))
return (binary_trees_ancestor(first, fir));
else if (sec == second || !fir || (!fir->parent && sec))
return (binary_trees_ancestor(sec, second));
return (binary_trees_ancestor(sec, fir));
}
