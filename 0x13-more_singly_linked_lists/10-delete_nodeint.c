#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a
 * listint_t linked list
 *
 * @head: Pointer to the pointer to the first node in the list
 * @index: Index of the node to be deleted, starting from 0
 *
 * Return: 1 if the deletion was successful, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev; /* declare two pointers to listint_t */
	unsigned int i;

	if (*head == NULL) /* check if the list is empty */
		return (-1);

	if (index == 0) /* special case for deleting the first node */
	{
		temp = *head; /* set temp to point to the first node */
		/* update head to point to the next node */
		*head = (*head)->next;
		free(temp); /* free the node to be deleted */
		return (1); /* return success */
	}

	prev = NULL; /* initialize prev to NULL */
	temp = *head; /* set temp to point to the first node */

	/* traverse the list until the index is reached */
	for (i = 0; i < index && temp != NULL; i++)
	{
		prev = temp; /* set prev to point to the current node */
		temp = temp->next; /* set temp to point to the next node */
	}

	if (temp == NULL) /* check if the index is out of range */
		return (-1);

	prev->next = temp->next; /* unlink the node to be deleted */
	free(temp); /* free the node to be deleted */

	return (1); /* return success */
}
