#include "main.h"
/**
 * _strspn - substr
 * @a: str scan
 * @input: str with char to match
 * Return: substr
 */
unsigned int _strspn(char *a, char *input)
{
	int count = 0;
	int x, y;

	while (*a)
	{
		for (x = 0; input[x]; x++)
		{
			y = 0;
			if (*a == input[x])
			{
				count++;
				y = 1;
				break;
			}
		}
		if (!y)
			break;
		a++;
	}
	return (count);
}
