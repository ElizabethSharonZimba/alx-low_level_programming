#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - random password generator
 * Return: 0 succeesful execution
 */
int main(void)
{
	int sum = o;
	char c;

	srand(time(NULL));
	while (sum < 2772)
	{
		c = rand() % 94 + 33;
		putchar(c);
		sum += c;
	}
	putchar(2772 - sum);
	return (0);
}
