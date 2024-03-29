#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t
 * linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: Sum of all the data (n) of the linked list or 0 if the list
 * is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	/* Traverse the linked list and add the data of each node to the sum */
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	/* Return the sum */
	return (sum);
}
