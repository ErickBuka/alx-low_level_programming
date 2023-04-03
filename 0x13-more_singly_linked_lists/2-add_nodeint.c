#include "lists.h"
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>

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
	listint_t *new_node;

	/* Check if head is NULL */
	if (head == NULL)
		return (NULL);

	/* Allocate memory for new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Assign values to new node */
	new_node->n = n;
	new_node->next = *head;

	/* Update head to point to new node */
	*head = new_node;

	return (*head);
}
