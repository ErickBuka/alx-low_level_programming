#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Pointer to the first element of the array
 * @n: Number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp;
	/* Loop through the first half of the array */

	for (i = 0; i < n / 2; i++)
	{

	/* Swap the i-th element with its opposite counterpart */
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
