#include "main.h"
/**
 * pow_recursion - returns the value of x to the power y
 * @x: num to be raised
 * @y: to the power
 * Return: value of x to the power y
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	result *= _pow_recursion(x, y - 1);
	return (result);
}
