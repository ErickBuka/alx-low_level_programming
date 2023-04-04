#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 * @index: Index of the node to return.
 *
 * Return: Pointer to the nth node of the linked list or NULL if the node does
 *         not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current = head;

	/* Traverse the linked list until the nth node or end of the list is reached */
	for (i = 0; i < index && current != NULL; i++)
		current = current->next;

	/* If the nth node exists, return a pointer to that node */
	if (i == index && current != NULL)
		return (current);

	/* If the nth node does not exist, return NULL */
	return (NULL);
}
