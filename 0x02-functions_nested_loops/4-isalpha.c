#include "main.h"

/**
 * _islower - check if char is lowercase
 *
 * @c: is the char to be checked
 *
 * Return: Always 0.
 */

int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
