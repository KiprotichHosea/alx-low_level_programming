#include <stdio.h>
/**
 * main - Entry point
 * Return: 0(success)
 */
int main(void)
{
	char letter;

	letter = 'a';
		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}
	{
		putchar(letter - 'a' + 'A');
		letter++;
	}
	putchar('\n');
	return (0);
}
