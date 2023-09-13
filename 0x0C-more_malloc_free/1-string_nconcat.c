#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - Concatenates two strings with a limit on s2.
 * 
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
/**
 * string_nconcat - Concatenates two strings with a limit on s2.
 * 
 * @s1: The first string.
 * @s2: The second string.
 * 
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1;
	unsigned int len2;
	unsigned int i;

	char *concatenated;

	/* Calculate the lengths of s1 and s2 (or handle NULL inputs) */
	len1 = (s1 == NULL) ? 0 : strlen(s1);
	len2 = (s2 == NULL) ? 0 : strlen(s2);

	/* Adjust n if it's greater than or equal to the length of s2 */
	if (n >= len2)
		n = len2;

	/* Allocate memory for the concatenated string (+1 for the null terminator) */
	concatenated = malloc(len1 + n + 1);

	/* Check if malloc was successful */
	if (concatenated == NULL)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}

	/* Copy characters from s1 to the concatenated string */
	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];

	/* Copy characters from s2 (up to n characters) to the concatenated string */
	for (unsigned int j = 0; j < n; j++, i++)
		concatenated[i] = s2[j];

	/* Null-terminate the concatenated string */
	concatenated[i] = '\0';

	/* Return a pointer to the concatenated string */
	return (concatenated);
}
