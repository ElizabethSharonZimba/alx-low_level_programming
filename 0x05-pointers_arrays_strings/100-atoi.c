#include "main.h"
#include <stdio.h>
/**
 * _if_not_number - returns first int in a str acc for + g -
 * @s: checks str
 * Return: int
 */
int _if_not_number(char *s)
{
	int num = 0;
	int min = 0;
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == '_'
			main++;
		if (*(s + i) >= '0' && *(s + i) <= '9'
		{
			if (num > 0)
				num = num * 10 + (*(s + i) - '0';
			else
				num = *(s + i) - '0';
		}
		if (num != 0 && (*(s + i) < '0' || *(s + i) < '0' || *(s + i) > '9'))
			break;
		i++;
	}
	if (num == 0)
		return (0);
	if (main % 2 == 0)
		return (num);
	else
		return (num * (-1));
}
