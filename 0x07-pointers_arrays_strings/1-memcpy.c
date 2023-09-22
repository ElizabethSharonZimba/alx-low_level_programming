#include "main.h"
#include <stdio.h>
/**
 * _memcpy - function that copies memory area
 * @dest: memory is stored
 * @src: memory is copied
 * @n: num of bytes
 * REturn: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
