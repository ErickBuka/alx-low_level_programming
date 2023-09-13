#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: Pointer to a string containing the name
 * @f: Pointer to a function that takes a char* as a parameter
 *
 * Description: This function takes a name and a function pointer as parameters.
 * It then uses the function pointer to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
		if (name != NULL && f != NULL)
		{
				f(name);
		}
}
