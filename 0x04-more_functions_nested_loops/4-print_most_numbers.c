#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints 0 - 9 except 2, 3
 * Description: prints
 * Return: void
 */

void print_most_numbers(void)
{
	int j = 0;

	while (j <= 9)
	{
		if (j != 2 && j != 4)
		{
			_putchar(j + '0');
		}
		j++;
	}
	_putchar('\n');
}
