#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - Frees a listint_t list
 * @head: A pointer to the first node of the list
 *
 * Return: Always void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
