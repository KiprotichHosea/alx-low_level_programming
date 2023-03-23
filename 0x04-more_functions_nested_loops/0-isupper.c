#include "main.h"
/**
 * _isupper - checks for uppercase letter
 *
 * @c: parameter c
 *
 * Return: 1 if it is uppercase
 * else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
