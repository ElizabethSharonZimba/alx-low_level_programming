#include "main.h"
/**
 * _strncpy - copy a str
 * @dest: copy dest
 * @src: copy src
 * @n: bytes
 * Return: copy str
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
