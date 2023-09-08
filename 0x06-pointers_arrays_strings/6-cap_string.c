#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to be capitalized.
 *
 * Return: A pointer to the capitalized string.
 */
char *cap_string(char *s)
{
	int i;

	/* Capitalize first letter */
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	/* Capitalize letters after separators */
	for (i = 1; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n'
				|| s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.'
				|| s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"'
				|| s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{'
				|| s[i - 1] == '}')
			{
				s[i] -= 32;
			}
			}
		}

	return (s);
}
