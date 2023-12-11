#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: copy to
 * @src: copy from
 * @n: input number of char
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src && n--)
		*dest++ = *src++;
	if (!*src)
		while (*dest && n--)
			*dest++ = 0;
	return (ptr);
}
