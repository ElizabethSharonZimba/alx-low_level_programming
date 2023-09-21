#include "main.h"
/**
 * rot13 - encodes a str using rot13
 * @s: input str
 * Return: encoded str
 */
char *rot13(char *s)
{
	int i;
	int k;
	char rot[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char datarot13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; k < 52; k++)
		{
			if (s[i] == rot[k])
			{
				s[i] = datarot13[k];
				break;
			}
		}
	}
		return (s);
}
