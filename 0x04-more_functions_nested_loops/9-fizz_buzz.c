#include <stdio.h>
/**
 * main - prints "fizz" for digits  divided by 3
 * prints "Buzz" for digit divided by 5
 * prints "FizzBuzz" for digit divided by 3,on digits thaat are from 1-100
 * Return: 0 sucess
 */

int main(void)
{
	int i;

	for (i = 1; i <= 99; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%i  ", i);
	}
	printf("Buzz\n");
	return (0);
}
