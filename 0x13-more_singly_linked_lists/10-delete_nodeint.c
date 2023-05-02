#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *first = *head;
	listint_t *current = NULL;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(first);
		return (1);
	}
	while (i < index - 1)
	{
		if (!first || !(first->next))
			return (-1);
		first = first->next;
		i++;
	}
	current = first->next;
	first->next = current->next;
	free(current);
	return (1);
}
