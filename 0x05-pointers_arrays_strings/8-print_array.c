#include "main.h"
#include <stdio.h>
/**
 * print_array - prints arrays then a \n
 * @a: array of int
 * @n: number of obj in array
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	putchar('\n');
}
