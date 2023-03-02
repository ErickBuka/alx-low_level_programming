/**
 * leet - Encodes a string into 1337.
 * @s: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *s)
{
	int i, j;
	char leet_letters[] = "aAeEoOtTlL";
	char leet_numbers[] = "4433007711";

	/* Loop through each character in the string */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Loop through each leet letter */
		for (j = 0; leet_letters[j] != '\0'; j++)
		{
			/* If the current character matches a leet letter, replace it */
			if (s[i] == leet_letters[j])
			{
				s[i] = leet_numbers[j];
				break;
			}
		}
	}

	return (s);
}
