#include "main.h"

/**
 * binary_to_uint - binary number to an unsigned int
 * @b: binary num
 * Return: num
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int binry = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		binry = 2 * binry + (b[i] - '0');
	}

	return (binry);
}
