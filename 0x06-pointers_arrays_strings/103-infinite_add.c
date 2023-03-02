/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @size_r: buffer size
 *
 * Return: pointer to result, or 0 if result can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, n1_len, n2_len, sum, carry = 0;

	/* Get lengths of n1 and n2 */
	for (n1_len = 0; n1[n1_len]; n1_len++)
		;
	for (n2_len = 0; n2[n2_len]; n2_len++)
		;

	/* Check if result will fit in buffer */
	if (n1_len >= size_r || n2_len >= size_r || n1_len + 2 > size_r || n2_len + 2 > size_r)
		return (0);

	/* Initialize indices */
	i = n1_len - 1;
	j = n2_len - 1;
	k = 0;

	/* Add digits and store result in buffer */
	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';

		r[k++] = (sum % 10) + '0';
		carry = sum / 10;
	}

	/* Reverse buffer to get result in correct order */
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		r[i] ^= r[j];
		r[j] ^= r[i];
		r[i] ^= r[j];
	}

	/* Add null terminator */
	r[k] = '\0';

	return (r);
}
