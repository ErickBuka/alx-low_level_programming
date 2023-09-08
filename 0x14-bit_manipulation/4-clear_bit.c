#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: Pointer to the number whose bit needs to be cleared
 * @index: Index of the bit to be cleared
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Check if index is valid */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Use bitwise AND operator to clear the bit */
	*n &= ~(1UL << index);

	return (1);
}
