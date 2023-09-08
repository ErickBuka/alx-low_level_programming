#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Checks if a character is a digit.
 * @c: The character to check.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of command line arguments.
 * @argv: An array containing the command line arguments.
 *
 * Return: 0 if successful, 98 on error.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, "Error\n");
		return (98);
	}

	char *num1 = argv[1];
	char *num2 = argv[2];

	for (int i = 0; num1[i] != '\0'; i++)
	{
		if (!is_digit(num1[i]))
		{
			fprintf(stderr, "Error\n");
			return (98);
		}
	}

	for (int i = 0; num2[i] != '\0'; i++)
	{
		if (!is_digit(num2[i]))
		{
			fprintf(stderr, "Error\n");
			return (98);
		}
	}

	int result = atoi(num1) * atoi(num2);

	printf("%d\n", result);
	return (0);
}
