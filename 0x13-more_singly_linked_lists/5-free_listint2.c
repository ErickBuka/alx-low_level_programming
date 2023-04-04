#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL
 *
 * @head: Pointer to a pointer to the head of the linked list
 *
 * Description: This function takes a double pointer to the head of a linked
 * list of integers, frees all the nodes in the list, and sets
 * the head pointer to NULL.
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	/* Check if the head pointer is NULL */
	if (head == NULL)
		return;

	/* Initialize two pointers to the head of the linked list */
	current = *head;

	/* Traverse the linked list and free each node */
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}

	/* Set the head pointer to NULL */
	*head = NULL;
}
