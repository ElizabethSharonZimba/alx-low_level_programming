#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 *@s: 1st value -char
 *@c: 2nd value - char
 * Return: char with result
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (!c)
		return (s);
	return (NULL);

}
