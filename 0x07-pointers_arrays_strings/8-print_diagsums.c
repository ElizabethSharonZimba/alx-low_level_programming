#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals
 * @a: 1st char val
 * @size: 2nd char val
 */
void print_diagsums(int *a, int size)
{
	int i, k, sum1 = 0, sum2 = 0, j, m = 0;

	j = size - 1;
	for (i = 0; i < size; i++)
	{
		for (k = 0; k < size; k++)
		{
			if (i == k)
				sum1 += a[j];
			if (k == j)
				sum2 += a[j];
			k++;
			j++;
		}
		j--;
	}
	printf("%i, %i\n", sum1, sum2);
}
