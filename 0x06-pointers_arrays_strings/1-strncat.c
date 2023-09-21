#include "main.h"
/**
 * _strncat - + two strings
 * using n byte frm src
 * @dest: input value
 * @src: input value
 * @n: input valu
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	k = 0;
	while (k < n && src[k] != '\0')

	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}
