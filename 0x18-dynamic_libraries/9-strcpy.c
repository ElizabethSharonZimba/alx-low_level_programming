#include "main.h"

/**
 * char *_strcpy - copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: str
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
