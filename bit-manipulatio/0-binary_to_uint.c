#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string containing a binary number
 *
 * Return: converted number, or 0 if there is an error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL) /* check if string is null */
		return (0);

	for (i = 0; b[i] != '\0'; i++) /* iterate over string */
	{
		/* if current char is 0, shift result to left */
		if (b[i] == '0')
			result <<= 1;
		/* if current char is 1, shift result to left and add 1 */
		else if (b[i] == '1')
		{
			result <<= 1;
			result += 1;
		}
		/* if current char is not 0 or 1, return 0 (error) */
		else
			return (0);
	}
	/* return converted number */
	return (result);
}
