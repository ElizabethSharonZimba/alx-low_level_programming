#include "main.h"
/**
 * leet - encodes str into 1337
 * @n: input value
 * REturn: n value
 */
char *leet(char *n)
{
	int i, k;
	char s1[] = {'A', 'E', 'O', 'T', 'L'};
	char s2[] = {4, 3, 0, 7, 1};
		for (i = 0; n[i] != '\0'; i++)
		{
			for (k = 0; k < 10; k++)
			{
				if (n[i] == s1[k])
				{
					n[i] = s2[k];
			}
		}
	}
	return (n);
}
