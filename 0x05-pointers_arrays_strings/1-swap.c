#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: int swap b
 * @b: int swap a
 */
void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;
	*a = *b;
	*b = x;
}
