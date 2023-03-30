#include "main.h"

/**
 * add_node_end - Adds a new node containing a duplicated string to the end of a linked list
 * @head: A pointer to a pointer to the head of the list
 * @str: The string to be duplicated and added to the list
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	if (head == NULL || str == NULL)
	{
		return (NULL);
	}

	/* create a new node */
	list_t *new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->next = NULL;

	/* duplicate the string */
	char *new_str = strdup(str);
	if (new_str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = new_str;

	/* add the new node to the end of the list */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}

	return (new_node);
}

