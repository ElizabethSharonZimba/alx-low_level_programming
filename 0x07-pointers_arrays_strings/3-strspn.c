#include "main.h"
/**
 * _strspn - len of prefix sub
 * @s: 1st char val
 * @accept: 2nd char val
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0;
	int p = 0, i = 0;

	while (s[i] != ' ' && s[i] != '\0')
	{
		while (accept[p] != '\0')
		{
			if (s[i] == accept[p])
				k++;
			p++;
		}
		i++;
		p = 0;
	}
	return (k);
}
