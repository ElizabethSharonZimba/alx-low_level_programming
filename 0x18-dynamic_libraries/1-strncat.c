#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: to
 * @src:  from
 * @n: n
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	char *cat = dest + _strlen(dest);
	int length;

	if (n > _strlen(src) + _strlen(dest))
		length =  _strlen(dest) + _strlen(src);
	else
		length = _strlen(dest) + n;
	while (*src && n > 0)
	{
		*cat += *src;
		src++;
		cat++;
		n--;
	}
	if (n > 0)
		*cat += '\0';
	cat -= (length);
	*dest = *cat;
	return (cat);
}
