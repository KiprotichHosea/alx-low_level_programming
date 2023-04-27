#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;

	head = NULL;
	add_node_end(&head, "Hosea");
	add_node_end(&head, "Kiprotich");
	add_node_end(&head, "Mutai");
	print_list(head);
	return (0);
}
