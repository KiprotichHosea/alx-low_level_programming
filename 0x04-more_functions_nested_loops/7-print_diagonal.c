#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 *
 * @n: parameter n
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == i)
			{
				_putchar('\\');
			}
			else 
			{
				_putchar(' ');
			}
		}
		if (n <= 0)
			_putchar('\n');
	}
		_putchar('\n');
}
