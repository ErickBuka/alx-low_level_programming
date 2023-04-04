#include <stddef.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *curr = head, *temp;

	while (curr)
	{
		count++;
		printf("[%p] %d\n", (void *)curr, curr->n);
		temp = curr;
		curr = curr->next;
		if (temp <= curr)
		{
			printf("-> [%p] %d\n", (void *)curr, curr->n);
			exit(98);
		}
	}
	return (count);
}
