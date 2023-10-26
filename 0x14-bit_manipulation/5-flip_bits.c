#include "main.h"
/**
 * flip_bits - counts nums of bits that needs to be flipped to get bits of num
 * @m: num
 * @n: num
 * Return: count
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result, count = 0;

	result = n ^ m;

	while (result > 0)
	{
		if ((result & 1) == 1)
			count++;
		result = result >> 1;
	}
	return (count);
}
