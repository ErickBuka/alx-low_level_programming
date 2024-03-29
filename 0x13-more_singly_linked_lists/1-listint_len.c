#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to the head of the list
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;  /* Initialize count variable to 0 */

	/* Traverse the linked list */
	while (h != NULL)
	{
		count++;  /* Increment the count variable */
		h = h->next;  /* Move to the next node */
	}

	return (count);  /* Return the count */
}
