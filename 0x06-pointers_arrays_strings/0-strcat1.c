#include "main.h"

/**
 * *_strcat - concatenates @src to @dest
 * @src: the source string to append to @dest
 * @dest: the destiation string to be concatenated upon
 * Return:pointer to the resulting string
 */

char* _strcat(char* dest, char* src) {
	/**
	 *  find the end of the dest string
	 */
	char* dest_end = dest;
	while (*dest_end != '\0')
	{
		dest_end++;
	}
	/**
	 * copy the src string to the end of the dest string
	 */
	while (*src != '\0')
	{
		*dest_end = *src;
		dest_end++;
		src++;
	}
	/* add a terminating null byte to the end of the concatenated string */
	*dest_end = '\0';
	/* return a pointer to the concatenated string */
	return (dest);
}
