#include "main.h"

/**
 * _puts - prints a string
 * @str: string input
 * Return: string
 */
void _puts(char *str)
{
	int i;

	if (*str != '\0')
	{
		i = 0;
		while (*(str + i) != '\0')
		{
			_putchar(*(str + i));
			i++;
		}
	}
	_putchar('\n');
}
