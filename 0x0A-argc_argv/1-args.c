#include <stdio.h>

/**
 * main - Prints the number of arg
 * @argc: number of arg given to the program
 * @argv: array of pointers to the arg
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
