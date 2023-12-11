#include "main.h"

/**
 * _memcpy - copies memory area
 *@dest: memory to print
 *@src: 2nd value
 *@n: 3rd value
 * Return: char with result of memset
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
