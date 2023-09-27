#include "main.h"
/**
 * _print_rev_recursion - prints str in reverse
 * @s: prints str
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
	}
}
