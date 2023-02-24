#include "main.h"

/**
 * more_numbers - prints 0 - 14
 *
 * Return: void
 */

void more_numbers(void)
{
	char b, c;
	int a = 0;

	while (a < 10)
	{
		for (b = 0; b <= 14; b++)
		{
			c = b;
			if (b > 9)
			{
				_putchar('1');
				c = b % 10;
			}
			_putchar('0' + c);
		}

		_putchar('\n');
		a++;
	}
}
