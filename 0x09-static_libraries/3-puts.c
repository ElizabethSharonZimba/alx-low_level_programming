#include "main.h"
/**
 * _puts - str, foll ny \n
 * @str: points to str
 * Return: 0
 */
void _puts(char *str)
{
	int a;

	a = 0;
	if (*str != '\0')
	{
		while (*(str + a) != '\0')
		{
			_putchar(*(str + a));
			a++;
		}
	}
	_putchar('\n');
}
