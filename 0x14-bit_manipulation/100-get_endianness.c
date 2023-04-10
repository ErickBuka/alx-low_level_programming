#include "main.h"

/**
 * get_endianness - Checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	/* Declare an unsigned integer variable x and initialize it to 1 */
	unsigned int x = 1;

	/* Declare a character pointer c and set it to the address of 'x' */
	char *c = (char *)&x;
/* Check the value of the first byte pointed to by c. If it is non-zero */
/* it means the system is little endian. Otherwise, it is big endian. */
	if (*c)
		return (1); /* Little endian */
	else
		return (0); /* Big endian */
}
