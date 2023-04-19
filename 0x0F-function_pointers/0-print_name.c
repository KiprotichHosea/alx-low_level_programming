#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: a pointer to a character array that contains the name
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name ==NULL || f == NULL)
		return;
	f(name);
}
