#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: an integer
 * @b: an integer
 *
 * Return: an int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: an int
 * @b: an int
 *
 * Return: an int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: an integer
 * @b: an integer
 *
 * Return: an int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: an int
 * @b: an int
 *
 * Return: an int
 */
int op_div(int a, int b)
{
	if (b)
		return (a / b);
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - remainder division of a by b
 * @a: an integer
 * @b: an integer
 *
 * Return: an int
 */
int op_mod(int a, int b)
{
	if (b)
		return (a % b);
	printf("Error\n");
	exit(100);
}

