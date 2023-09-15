#include <stdio.h>
/**
 * main  - program that returns the heighest  prime num
 * Return: (0) successful execution
 */

int main(void)
{
	int i = 2;
	long n = 612852475143;

	while (i < n)
	{
		while (n % i == 0)
		{
			if (n == 1)
			{
				break;

			}
			n /= i;
		}
		i++
	}
	print("%lu\n", n);
	return (0);
}
