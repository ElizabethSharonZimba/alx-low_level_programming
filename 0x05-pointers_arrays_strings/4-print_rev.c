#include "main.h"
/**
 * print_rev - prints str in reverse and \n
 * @s: str
 * REturn: 0
 */
void print_rev(char *s)
{
	int i, count;

	if (*s != '\0')
	{
		count = 0;
		while (*(s + count) != '\0')
		{
			count++;
		}
		for (i = count - 1; i >= 0; i--)
			_putchar(*(s + i));
					
					} _putchar('\n');	
}
