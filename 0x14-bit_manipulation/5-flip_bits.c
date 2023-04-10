#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to get from one number
 *             to another
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits needed to flip_count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
/**
 * xor_result - We take the XOR of the two numbers (n and m) and store the
 * result in xor_result
 */
	unsigned long int xor_result = n ^ m;
	unsigned int flip_count = 0;

	/* Count the number of set bits in the XOR result */
	while (xor_result != 0)
	{
		flip_count += xor_result & 1;
		xor_result >>= 1;
	}
/**
 * return - We return the count of set bits, which represents the
 * number of bits that need to be flipped to get from n to m.
 */
	return (flip_count);
}
