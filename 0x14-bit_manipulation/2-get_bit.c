#include "main.h"

/**
 * get_bit - gets value of a bit at a given index
 * @n: num given
 * @index: index to search value
 * Return: bit index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
