#include "function_pointers.h"

/**
 * array_iterator - executes func given as param of each element on an array
 * @array: array
 * @size: size array and type size_t
 * @action: pointer func
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
