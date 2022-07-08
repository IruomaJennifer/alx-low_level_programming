#include "main.h"

/**
 * print_number - prints an integer
 * @n: an int
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int nw;

	nw = n;
	if (n < 0)
	{
		_putchar('-');
		nw = -(n);
	}
	if (nw / 10)
	{
		print_number(nw / 10);
	}
	_putchar((nw % 10) + '0');
}

