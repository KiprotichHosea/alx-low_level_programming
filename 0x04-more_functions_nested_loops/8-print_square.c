#include "main.h"
/**
 * print_square - prints a square
 * @size: size of the square
 *
 * Return: 0
 */

void print_square(int size)
{
	for (int row = 0; row < size; row++)
	{
		for (int column = 0; column < size; column++)
	{
	_putchar('#');
	}
		if (size <= 0)
		{
		_putchar('\n');
		return;
		}
	_putchar('\n');
	}
}
