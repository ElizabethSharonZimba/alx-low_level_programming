#include "main.h"
/**
 * _sqrt_recursion - returns square root of n
 * @n: n to return square root
 * Return: if n has  nat square ret 1, if n does not have nat square return -1
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n, root);
}
