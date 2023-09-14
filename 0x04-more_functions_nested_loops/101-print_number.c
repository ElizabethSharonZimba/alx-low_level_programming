#include "main.h"
/**
 * print_number - uses putchar to return the int
 * @n: returns an int
 * Returns: none
 */
void print_number(int n);
{
	int num = n;

	if (n < 0)
	{
		_putchar('_');
		num = -num;
	}
	if ((num / 10) > 10)
		print_number(num / 10);
	_putchar((num % 10) + '0')
}
