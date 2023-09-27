#include "main.h"
/**
 * strlen_recursion - returns len of str
 * @s: to measure str
 * Return: len of str
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
}
