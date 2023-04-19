#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator -  executes a function given
 * @array: apointer to integer array
 * @size: size of array
 * @action: pointer to a function
 * Return: always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0 ; i < size; i++)
	{
		action(array[i]);
	}
}
