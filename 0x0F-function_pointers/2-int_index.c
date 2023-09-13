#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array
 * @array: Pointer to the array
 * @size: Number of elements in the array
 * @cmp: Pointer to the comparison function
 *
 * Return: Index of the first matching element, or -1 if no match is found
 *
 * Description: This function searches for an integer in an array by using a
 * comparison function. It returns the index of the first matching element.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL && size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return i;
			}
		}
	}

	return -1;
}
