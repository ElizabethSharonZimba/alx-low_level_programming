#include "hash_tables.h"

/**
 * hash_djb2 -Hash function that implement djb2 algorithm
 * @str: Key to aplied the transformation
 * Return: Integer after the operations
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int count;

	hash = 5381;
	while ((count = *str++))
		hash = ((hash << 5) + hash) + count; /* hash * 33 + count */

	return (hash);
}
