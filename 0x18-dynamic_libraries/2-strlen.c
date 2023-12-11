#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: char input
 * Return: length of the input string
 */
int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (*s)
	{
		counter += 1;
		s += 1;
	}
	return (counter);

}
