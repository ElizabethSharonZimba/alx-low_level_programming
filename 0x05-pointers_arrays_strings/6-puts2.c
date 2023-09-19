#include "main.h"
/**
 * puts2 - prints 1 out of 2 in str and return \n
 * @str: pointer str print
 * Return: 0
 */
void puts2(char *str)
{
	int i;

	if (*str != '\0')
	{
		i = 0;
		while ((*(str + i) != '\0'))
		{
			if (i % 2 == 0)
				_putchar(*(str + i));
			i++;
		}
	}
	_putchar('\n');
}
