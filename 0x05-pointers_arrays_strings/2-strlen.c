#include "main.h"
/**
 * _strlen - prints lenght of string
 * @s: pointer
 * Return: counter
 */
int _strlen(char *s)
{
	int counter;

	counter = 0;

	while (*s != 0)

	{
		counter++;
		s++;
	}

	return (counter);
}
