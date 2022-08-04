#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function to print numbers
 * @seperator: pointer to char which is the seperator between numbers
 * @n: number of integers
 *
 * Return: nothing
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	if (n)
	{
		va_start(arg, n);
		printf("%d", va_arg(arg, int));
		for (i = 1; i < n; i++)
		{
			if (seperator != NULL)
			{
				printf("%s", seperator);
			}
			printf("%d", va_arg(arg, int));
		}
		va_end(arg);
	}
	printf("\n");
}

