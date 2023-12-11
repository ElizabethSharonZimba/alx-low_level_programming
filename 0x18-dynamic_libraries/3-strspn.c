#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *@s: 1st value -char
 *@accept: 2nd value - char
 * Return: char with result
 */
unsigned int _strspn(char *s, char *accept)
{
	int j = 0, i = 0;
	unsigned int a = 0;

	while (s[i] != ' ' && s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				a++;
			j++;
		}
		i++;
		j = 0;
	}
	return (a);
}
