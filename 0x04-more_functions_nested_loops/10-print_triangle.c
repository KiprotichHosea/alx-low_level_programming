#include "main.h"
/**
 * print_triangle - prints a triangle using #
 *
 * @size: size of the triangle
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
	_putchar('\n');
	return;
	}
	for (i = 1; i <= size; i++)
	{
	for (j = 1; j <= i; j++)
	{
		_putchar('#');
	}
	_putchar('\n');
	}
}
