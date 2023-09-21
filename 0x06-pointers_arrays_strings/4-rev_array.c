#include "main.h"
/**
 * _rev_array - rev array of int
 * @a: array
 * @n: num of elements of array
 * REturn: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
