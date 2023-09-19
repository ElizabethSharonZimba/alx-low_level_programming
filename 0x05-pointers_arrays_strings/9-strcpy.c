#include "main.h"
/**
 * _strcpy - copy strwith \0
 * @dest: point to dest
 * @src: point to str
 * Return: point to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
