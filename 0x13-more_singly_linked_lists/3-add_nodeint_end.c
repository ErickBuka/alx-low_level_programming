#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: A pointer to a pointer to the first node of the list
 * @n: The value to be added to the new node
 *
 * Return: The address of the new node, or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* Declare variables */
	listint_t *new_node, *temp;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL); /* Return NULL if malloc fails */
	}

	/* Set the value of the new node */
	new_node->n = n;
	new_node->next = NULL;

	/* If the linked list is empty, set the head to the new node */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Traverse the linked list to find the last node */
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	/* Add the new node to the end of the linked list */
	temp->next = new_node;

	return (new_node);
}
