#include <stdio.h>
/**
 * main - prints number from 1 to 100
 * and replaces numbers divisible by 3 with Fizz
 * and replaces numbers divisible by 5 with Buzz
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i == 100)
		{
			continue;
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
