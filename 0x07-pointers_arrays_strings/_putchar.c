#include "main.h"
#include <unistd>
/**
 * _putchar - writes the character c to stdio
 * @c: the character to print
 *Return: 1
 *on errer, -1 is retured, and errno is set properly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

