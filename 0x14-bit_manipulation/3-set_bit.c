#include "main.h"
/**
 * set_bit - sets value of a bit at a given index to 1
 * @n: pointer to bit
 *@index: index to search
 * Return: 1 sucess else -1 failed
 **/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	*n ^= (1 << index);

	return (1);
}
