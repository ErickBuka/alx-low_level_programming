#include "3-calc.h"

/**
 * op_add - Returns the sum of a and b.
 * @a: First operand
 * @b: Second operand
 * Return: Result of the addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of a and b.
 * @a: First operand
 * @b: Second operand
 * Return: Result of the subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of a and b.
 * @a: First operand
 * @b: Second operand
 * Return: Result of the multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the result of the division of a by b.
 * @a: First operand
 * @b: Second operand
 * Return: Result of the division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of a by b.
 * @a: First operand
 * @b: Second operand
 * Return: Result of the modulo operation
 */
int op_mod(int a, int b)
{
	return (a % b);
}
