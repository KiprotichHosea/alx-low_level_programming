#include <stdlib.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @i: number of times to copy b
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int i)
{
	unsigned int n;

	for (n = 0; n < i; n++)
	{
		s[n] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int n;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	n = nmemb * size;
	ptr = malloc(n);

	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, n);
	return (ptr);
}
