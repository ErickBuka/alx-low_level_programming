#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: Pointer to the pointer to the head node of the list
 *
 * Return: A pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	/* loop through the list */
	while (*head)
	{
		/* save the next node */
		next = (*head)->next;
		/* reverse the link of current node to previous node */
		(*head)->next = prev;
		/* move prev to current node */
		prev = *head;
		/* move current node to the next node */
		*head = next;
	}

	/* assign head to the last node */
	*head = prev;

	/* return the head of the reversed list */
	return (*head);
}
