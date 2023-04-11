#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *_strdup - returns a pointer to a new string which is a duplicate of str
 *
 * @str: string to be duplicated
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	char *str2;
	int i, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
		i++;

	str2 = malloc(sizeof(char) * (i + 1));

	if (str2 == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j]; j++)
		str2[j] = str[j];

	return (str2);
}
