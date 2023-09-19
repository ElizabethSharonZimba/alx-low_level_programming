#include "main.h"
/**
 * _puts - prints a str followed by a new line
 *  @str: pointer to str to print
 *  Return: null
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
