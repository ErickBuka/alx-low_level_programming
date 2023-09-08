#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated with malloc(old_size).
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 *
 * Return: Pointer to the newly allocated memory block, or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *old_ptr;
	unsigned int i, min_size;

	/* If new_size is zero, and ptr is not NULL, free(ptr) and return NULL */
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	/* If ptr is NULL, equivalent to malloc(new_size) */
	if (ptr == NULL)
		return (malloc(new_size));

	/* If new_size is equal to old_size, do not do anything and return ptr */
	if (new_size == old_size)
		return (ptr);

	old_ptr = ptr;

	/* Calculate the minimum size to copy */
	min_size = (new_size < old_size) ? new_size : old_size;

	/* Allocate memory for the new block */
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	/* Copy the old data to the new block */
	for (i = 0; i < min_size; i++)
		new_ptr[i] = old_ptr[i];

	free(ptr); /* Free the old memory block */

	return (new_ptr);
}
