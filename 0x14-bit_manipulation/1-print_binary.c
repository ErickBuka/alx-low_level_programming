#include "main.h"

/**
* print_binary - Prints the binary representation of a number
* @n: Number to be printed in binary
* Return: void
*/
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;

/* Find the most significant bit */
	while (mask <= n >> 1)
	{
		mask <<= 1;
	}

/* Print the binary representation */
	while (mask > 0)
	{
/* Check if the bit at mask position is set */
	if (n & mask)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	mask >>= 1;
	/* Shift mask to the right by 1 bit */
	}
}
