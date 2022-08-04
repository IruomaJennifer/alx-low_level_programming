#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings
 * @seperator: pointer to char as string seperator
 * @n: number of strings
 *
 * Return: nothing
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *str;

	if (n)
	{
		va_start(arg, n);
		for (i = 0; i < n; i++)
		{
			str = va_arg(arg, char *);
			if (str != NULL)
				printf("%s", str);
			else
				printf("(nil)");
			if (seperator != NULL && i != (n - 1))
				printf("%s", seperator);
		}
		va_end(arg);
	}
	printf("\n");
}

