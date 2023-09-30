#include "main.h"
/**
 * _isalpha - evaluates alpha char
 * @a: alpha char
 * Return: 1 else 0
 */
int _isalpha(int a)
{
	if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
		return (1);
	return (0);
}
