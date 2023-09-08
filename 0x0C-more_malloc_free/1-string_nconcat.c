#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings with a limit on s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n) {
    unsigned int len1 = (s1 == NULL) ? 0 : strlen(s1);
    unsigned int len2 = (s2 == NULL) ? 0 : strlen(s2);

    if (n >= len2)
        n = len2;

    char *concatenated = malloc(len1 + n + 1); /* +1 for the null terminator */

    if (concatenated == NULL)
        return (NULL);

    unsigned int i, j;
    
    for (i = 0; i < len1; i++)
        concatenated[i] = s1[i];

    for (j = 0; j < n; j++, i++)
        concatenated[i] = s2[j];

    concatenated[i] = '\0'; /* Null-terminate the concatenated string */

    return (concatenated);
}
