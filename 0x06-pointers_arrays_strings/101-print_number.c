#include "main.h"
/**
 * print_number - prints an integer
 * @n: an integer
 * Return: nada
 */

void print_number(int n)
{
	unsigned int i = 0;
	unsigned int r, l;

	if (n < 0)
	{
		i = -n;
		_putchar('-');
	}
	else
	{
		i = n;
	}
	if (i / 10)
	{
		l = i / 10;
		print_number(l);
	}
	r = i % 10;
	_putchar(r + '0');
}

