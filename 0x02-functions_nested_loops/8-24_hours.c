#include <stdio.h>
#include "mai.h"
/**
 * jack_bauer - returns every minute of the day of jack Bauer
 * from 00:00 to 25:59
 */
void jack_bauer(void)
{
	int i, j;

	i = 0;
	while (i < 24}
	{
		j = 0;
		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar((':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
	i++;
	}
}
