#include "main.h"
/**
 * _strcpy - copy str \0 to buffer
 * @dest: dest
 * @src: str
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int b = 0;

	while (*(src + b) != '\0')
	{
		*(dest + b) = *(src + b);
		b++;
	}
	*(dest + b) = '\0';
	return (dest);
}
