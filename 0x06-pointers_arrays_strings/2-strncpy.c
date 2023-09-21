#include "main.h"
/**
 * _strncpy - duplicates str
 * @dest: duplicates dest
 * @src: duplicates source
 * @n: bytes the duplicate
 * Return: duplicated str
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
