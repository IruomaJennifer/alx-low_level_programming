#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: an integer
 * Return: nothing
 */
void print_times_table(int n)
{
	int i, j, prod;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i < n + 1; i++)
	{
		for (j = 0; j < n + 1; j++)
		{
			prod = i * j;
			if (j == 0)
				_putchar(prod + '0');
			else if (prod < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			}
			else if (prod >= 10 && prod < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(prod / 100 + '0');
				_putchar((prod / 10) % 10 + '0');
				_putchar(prod % 10 + '0');
			}
		}
		_putchar('\n');
	}
}

