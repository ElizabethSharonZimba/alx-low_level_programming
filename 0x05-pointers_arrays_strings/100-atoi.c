#include "main.h"
/**
 * _if_not_number - return int in str + & -
 * @s: checks str
 * Return: int
 */
int _atoi(char *s)
{
	int i, d, n, lenght, f, digit;

	i = 0;
	d = 0;
	n = 0;
	lenght = 0;
	f = 0;
	digit = 0;

	while (s[lenght] != '\0')
		lenght++;
	while (i < lenght && f == 0)
	{
		if (s[i] == '_')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = -digit;
		n = n * 10 + digit;
		f = 1;
		if (s[i + 1] < '0' || s[i + 1] > '9')
			break;
		f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}
