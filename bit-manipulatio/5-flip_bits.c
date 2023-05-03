#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to get from one number
 *             to another
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits needed to count_flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
/**
 * dif - We take the XOR of the two numbers (n and m) and store the
 * result in 'dif'
 */
	unsigned long int dif = n ^ m;
	unsigned int count_flip = 0;

	/* Count the number of set bits in the XOR result */
	while (dif != 0)
	{
		count_flip += dif & 1;
		dif >>= 1;
	}
/* return - We return the count of set bits, which represents the */
/* number of bits that need to be flipped to get from n to m. */
	return (count_flip);
}
