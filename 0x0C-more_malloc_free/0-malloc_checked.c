#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The size of the memory to allocate.
 *
 * Return: A pointer to the allocated memory.
 *         If malloc fails, the program terminates with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	/* Attempt to allocate memory */
	ptr = malloc(b);

	/* Check if malloc was successful */
	if (ptr == NULL)
	{
		/* Print error message to stderr */
		fprintf(stderr, "Memory allocation failed\n");

		/* Terminate the program with status value of 98 */
		exit(98);
	}

	/* Return the pointer to allocated memory */
	return (ptr);
}
