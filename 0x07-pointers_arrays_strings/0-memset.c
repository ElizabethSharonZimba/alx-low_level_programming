#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * fills the first n byte with b constant
 * @s: pointer to memory area
 * @b: constant to fill memory
 * @n: bytes of memory area to  be filled
 * Return: memory s to pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}
	return (s);
}
