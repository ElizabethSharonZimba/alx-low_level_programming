#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints opcodes
 * @argv: arg array
 * @argc: num of arg
 * Return: 0
 */
int main(int argc, char **argv)
{
	int runner = 0, bytes;
	
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (runner < bytes)
	{
		printf("%02hhx", *((char *)(main + runner)));
		if (bytes > runner + 1)
			printf(" ");
		runner++;
	}
	printf("\n");
	return (0);
}
