#include <stdio.h>
/**
 * main - Entry point
 * Return: 0(success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 100; n++)
	{
		putchar(n + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
