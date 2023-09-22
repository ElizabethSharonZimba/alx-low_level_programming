#include "main.h"
/**
 * _strpbrk - searches for any set of bytes
 * @s: 1st char val
 * @accept: 2nd char val
 * REturn: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int p = 0;

	while (*s)
	{
		while (accept[p] != '\0')
		{
			if (*s == accept[p])
				return (s);
			p++;
		}
		p = 0;
		s++;
	}
	return ('\0');
}
