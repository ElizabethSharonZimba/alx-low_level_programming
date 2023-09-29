#include <stdio.h>
#include "main.h"
/**
 * _strlen - returns len of a str
 * @str:strlen 
 * Return: strlen
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}
/**
 * _strcat - 2 str
 * @dest:dest pointer
 * @src: 2 str
 * Return: concat str
 */
char *_strcat(char *dest, char *src)
{
	char *cat = dest + _strlen(dest);
	int len =  _strlen(dest) + _strlen(src);

	while (*src)
	{
		*cat += *src;
		src++;
		cat++;
	}
	*cat += '\0';
	cat -= (len);
	*dest = *cat;
	return (cat);
}
