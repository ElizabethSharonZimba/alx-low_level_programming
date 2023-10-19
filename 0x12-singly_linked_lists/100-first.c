#include <stdio.h>
/**
 * first - function before main
 * Return: void
 */
void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
