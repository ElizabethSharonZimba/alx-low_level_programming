#include "main.h"
/**
 * clear_bit - Sets the value of a index bit
 * @index: index to search value
 * @n: pointer to bit
 * Return: 1 success else -1 failed
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
