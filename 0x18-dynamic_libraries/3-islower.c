#include "main.h"

/**
 * _islower - Checks if a char is lowercase
 * @c: The char to be checked
 * Return: 1 else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
