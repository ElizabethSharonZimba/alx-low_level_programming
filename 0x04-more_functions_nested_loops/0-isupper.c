#include "main.h"
/**
 * _isupper -checks if the characters are uppercase
 * @c: to check the int
 * Return: (0) Always
 */
int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
