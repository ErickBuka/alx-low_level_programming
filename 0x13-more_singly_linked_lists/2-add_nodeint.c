#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 *
 * @head: A pointer to the head of the list
 * @n: The value to add to the new node
 *
 * Return: A pointer to the new head of the list
 */

listint_t *add_nodeint(listint_t **head, int n)
{
    listint_t *add_nodeint;

    /* Check if head is NULL */
	if (head == NULL)
		return (NULL);

	/* Allocate memory for new node */
	add_nodeint = malloc(sizeof(listint_t));
	if (add_nodeint == NULL)
		return (NULL);

	/* Set values for new node */
	add_nodeint->n = n;
	add_nodeint->next = *head;

	/* Update head to point to new node */
	*head = add_nodeint;

	return (*head);
}
