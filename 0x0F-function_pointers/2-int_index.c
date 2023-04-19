#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - returns the index of first element
 * @array: a pointer to an integer array
 * @size: number of elements in the array
 * @cmp: pointer to a function
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
