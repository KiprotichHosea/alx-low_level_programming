#include <stdio.h>
/**
 * main - Entry point
 * Return: 0(success)
 */
int main(void)
{
	char letter;

	char d;

	letter = 'a';
	d = 'A';
		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
