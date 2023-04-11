#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 *
 * @s1: char
 * @s2: char
 *
 * Return: s3
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i] != '\0')
		i++;

	j = 0;
	while (s2[j] != '\0')
		j++;

	s3 = malloc(sizeof(char) * (i + j + 1));

	if (s3 == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s3[j] = s2[j];
		i++,j++;
	}

	s3[i] = '\0';
	return (s3);
}
