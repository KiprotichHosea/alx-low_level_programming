#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int l1 = 0;
	unsigned int l2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	if (n >= l2)
		s3 = malloc(sizeof(char) * (l1 + n + 1));
	else
		s3 = malloc(sizeof(char) * (l1 + l2 + 1));

	if (!s3)
		return (NULL);

	for (i = 0; i < l1; i++)
		s3[i] = s1[i];
	for (j = 0; j < n; j++)
		s3[i + j] = s2[j];
	s3[i + j] = '\0';
	return (s3);
}
