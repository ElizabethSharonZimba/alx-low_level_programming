#include <stdio.h>
/**
 * main - (Start)prints combination of digits
 * Return: 0 = (End, sucessful execution)
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			if ((a == 8) && (b == 9))
				;
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
