#include "main.h"

/**
 * _strchr - locates a character in a string
 *@s: 1st value -char
 *@c: 2nd value - char
 * Return: char with result
 */
char *_strchr(char *s, char c)
{

	if (*s == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
	       s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
