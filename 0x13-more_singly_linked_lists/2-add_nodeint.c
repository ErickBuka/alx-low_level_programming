#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 *
 * @head: A pointer to the head of the listint_t list
 * @n: The integer to be added to the listint_t list
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* Create a new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	/* Assign the value to the new node */
	new_node->value = n;

	/* Make the new node the head of the linked list */
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
