#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number whose bit needs to be set
 * @index: index of the bit to be set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	/* Check if index is greater than the number of bits */
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	/* Set the bit at the given index to 1 */
	*n |= mask;

	return (1);
}
