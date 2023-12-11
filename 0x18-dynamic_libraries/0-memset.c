#include "main.h"
/**
 * _memset - fills memory with a constant byte
 *@s: 1rst value
 *@b: 2nd value
 *@n: 3rd value
 * Return: char with result of memset
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
