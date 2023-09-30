#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - byes
 * @a: char
 * @input: char
 * Return: NULL
 */
char *_strpbrk(char *a, char *input)
{
	int b;

	while (*a)
	{
		for (b = 0; input[b]; b++)
		{
			if (*a == input[b])
			{
				return (a);
			}
			a++;
		}
	}
	return (NULL);
}
