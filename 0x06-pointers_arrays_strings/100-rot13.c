#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
	int i, j;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	/* Loop through each character in the string */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Loop through each letter in the letters array */
		for (j = 0; letters[j] != '\0'; j++)
		{
			/* If the current character matches a letter, replace it with its rot13 equivalent */
			if (s[i] == letters[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}

	return (s);
}
