#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: A pointer to a pointer to the first node in the linked list
 * @idx: The index of the list where the new node should be added
 * @n: The integer data of the new node
 *
 * Return: The address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i = 0;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Set the new node's data to n */
	new_node->n = n;

	/* If the index is 0, set the new node as the head and return its address */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
 	}

	/* Traverse the linked list to find the node before the index */
	temp = *head;
	while (i < idx - 1)
	{
		/* If we reach the end of the list before the index, return NULL */
		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}

  		temp = temp->next;
		i++;
	}

	/* If we found the node before the index, insert the new node after it */
	new_node->next = temp->next;
	temp->next = new_node;

	/* Return the address of the new node */
	return (new_node);
}
