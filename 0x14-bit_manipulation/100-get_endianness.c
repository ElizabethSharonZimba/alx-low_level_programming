#include "main.h"

/**
 * get_endianness - get the endianness
 *Desc: endiannes of the arch
 * Return: 0
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}
