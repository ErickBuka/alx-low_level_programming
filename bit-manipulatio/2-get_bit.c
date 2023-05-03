#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number whose bit value we want to check
 * @index: the index of the bit we want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	/* Check if index is greater than or equal to the n of bits in a long int */
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	/* Create a mask with a 1 in the position of the bit we want to get */
	mask = 1 << index;

	/* Use bitwise AND to extract the value of the bit */
	if (n & mask)
	/* returns 1 if (n & mask is 1) */
		return (1);
	else
		return (0);
}
