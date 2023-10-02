#include <stdio.h>

/**
 * main - prints all arg
 * @argc: number of arg given to the program
 * @argv: array of pointers to the arg
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
