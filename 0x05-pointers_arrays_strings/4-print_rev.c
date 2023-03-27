#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int i;
	int length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
