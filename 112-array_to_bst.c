#include "binary_trees.h"
/**
* array_to_bst - the function builds.
* a Binary Search Tree from an array.
* @array: points towards the 1st element
* of the array to be converted.
* @size: shows the no. elements in the array.
* Return: returns the pointer to the root node.
*/
bst_t *array_to_bst(int *array, size_t size)
{
bst_t *newTree;
size_t index;
if (array == NULL)
return (NULL);
newTree = NULL;
for (index = 0; index < size; index++)
{
bst_insert(&newTree, array[index]);
}
return (newTree);
}
