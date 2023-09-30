#include "main.h"
#include <stddef.h>
/**
 * _strchr - char in a str
 * @a: searchable str
 * @b: target char
 * Return: NULL
 */
char *_strchr(char *a, char b)
{
	while (*a)
	{
		if (b == *a)
		{
			return (a);
		}
			a++;
		}
		if (!b)
			return (a);
		return (NULL);
}
