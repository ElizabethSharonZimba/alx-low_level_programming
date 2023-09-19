#include "main.h"
/**
 * rev_string - rev str
 * @s: pointer str
 * Return: none
 */
void rev_string(char *s)
{
	int i, count;
	char swap;

	if (*s != '\0')
	{
		count = 0;
		while (i <= count)
		{
			swap = *(s + i);
			*(s + i) = *(s + count);
			*(s + count) = swap;
			i++;
			count--;
		}
	}





}
