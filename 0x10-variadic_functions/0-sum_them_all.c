#include <stdarg.h>

/**
 * sum_them_all - function that sums all its parameters
 * @n: the number of parameters
 *
 * Return: an int which is the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list arg;

	if (n)
	{
		va_start(arg, n);
		for (i = 0; i < n; i++)
			sum += va_arg(arg, int);
		va_end(arg);
		return (sum);
	}
	return (0);
}
