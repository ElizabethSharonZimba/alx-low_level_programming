#include "hash_tables.h"

/**
 * key_index - to a key
 * @key: to be indexed
 * @size: of the hash table
 * Return: result
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int result;

	result = hash_djb2(key) % size;
	return (result);
}
