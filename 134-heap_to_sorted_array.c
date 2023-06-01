#include "binary_trees.h"
/**
* heap_to_sorted_array - function converts a Binary Max Heap
* @size: the size address the array
* @heap: points to the root node
* Return: value sorted in the descending order.
*/
int *heap_to_sorted_array(heap_t *heap, size_t *size)
{
int *newArray;
int extract, i = 0;
size_t heap_size;
if (!heap)
return (NULL);
heap_size = binary_tree_size(heap);
*size = heap_size;
newArray = malloc(heap_size * sizeof(int));
if (!newArray)
return (NULL);
while (heap)
{
extract = heap_extract(&heap);
newArray[i] = extract;
i++;
}
return (newArray);
}
