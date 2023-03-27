#include "main.h"
/**
 * swap_int - swap the values of two strings
 *
 * @a:parameter a
 * @b: parameter b
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
