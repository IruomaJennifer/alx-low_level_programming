#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to a name to print
 * @f: pointer to function that prints a name
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

