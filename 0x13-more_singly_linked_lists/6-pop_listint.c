#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 *              and returns the head node's data (n)
 *
 * @head: Pointer to a pointer to the head of the linked list
 *
 * Description: This function takes a double pointer to the head of a linked
 * list of integers, deletes the head node of the list, and returns the
 * data stored in the deleted node. If the list is empty, the
 * function
 *
 * Return: The data stored in the deleted node, or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	/* Check if the list is empty */
	if (*head == NULL)
		return (0);

	/* Store the data of the head node */
	data = (*head)->n;

	/* Delete the head node and update the head pointer */
	temp = *head;
	*head = (*head)->next;
	free(temp);

	/* Return the data of the deleted node */
	return (data);
}
