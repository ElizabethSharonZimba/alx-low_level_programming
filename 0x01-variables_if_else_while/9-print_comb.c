#include <stdio.h>
/**
 * main - prints all prossible combinations of single-digit num
 * Return: 0 (Success0
 **/

int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
