#include "main.h"
/**
 * _abs -  function that computes the absolute value of an integer
 *
 * @i: parameter to be checked
 *
 * Return: Always i
 */

int _abs(int i)
{
	if (i < 0)
		i = -(i);
	else if (i >= 0)
		i = i;
	return (i);
}
