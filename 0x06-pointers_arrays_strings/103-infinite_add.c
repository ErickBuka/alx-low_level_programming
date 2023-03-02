#include "main.h"
/**
 * infinite_add - Adds two numbers.
 * @n1: The first number to be added.
 * @n2: The second number to be added.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum = 0;

	/* Get the length of n1 and n2 */
	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	/* Check if result can be stored in r */
	if (len1 >= size_r || len2 >= size_r || size_r <= 0)
		return (0);

	/* Add digits from right to left, and store result in r */
	r[size_r - 1] = '\0';
	while (len1 > 0 || len2 > 0)
	{
		len1--;
		len2--;

		if (len1 >= 0)
			sum += n1[len1] - '0';
		if (len2 >= 0)
			sum += n2[len2] - '0';

		sum += carry;
		if (sum >= 10)
		{
			carry = 1;
			sum -= 10;
		}
		else
			carry = 0;

		r[size_r - 2] = sum + '0';
		size_r--;
	}

	/* Check if there is a remaining carry */
	if (carry == 1)
	{
		if (size_r <= 0)
			return (0);
		r[size_r - 2] = '1';
	}

	return (r + (size_r - 1));
}
