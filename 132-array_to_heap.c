#include "binary_trees.h"
/**
* array_to_heap - function builds Max Binary Heap tree from array
* @size: the array number
* @array: points towards first element of array.
* Return: the value points toward root node
*/
heap_t *array_to_heap(int *array, size_t size)
{
unsigned int index;
heap_t *rootNode = NULL;
for (index = 0; index < size; index++)
heap_insert(&rootNode, array[index]);
return (rootNode);
}
