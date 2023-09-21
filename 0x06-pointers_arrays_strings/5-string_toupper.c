#include "main.h"
/**
 * _string_toupper - changes lowercase to uppercase
 * @s: passed str
 * Return: uppercase str
 */
char *string_toupper(char *s)
{
	char *ptr = s;

	while (*s)
	{
		if (*s >= 97 && *s <= 122)
			*s -= 32;
		s++;
	}
	return (ptr);
}
