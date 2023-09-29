#include "main.h"
/**
 * _memset -   const byte
 * @a: dest pointed to by a.
 * @b: the const byte b.
 * @n: the 1st n bytes.
 * Return: memory dest.
 */
char *_memset(char *a, char b, unsigned int n)
{
		unsigned int x = 0;

		for (x; x < n; x++)
		{
			*(a + x) = b;
		}
		return (a);
}
