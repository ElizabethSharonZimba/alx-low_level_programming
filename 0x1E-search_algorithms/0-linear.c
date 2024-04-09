#include "search_algos.h"

/**
 * linear_search - linear scan through an array to find an ele
 * @array: array to search
 * @size: length of array
 * @value:to search for
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
