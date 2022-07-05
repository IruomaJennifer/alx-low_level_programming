#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: an integer
 *
 * Return: the value of the last digit
 */
int print_last_digit(int i)
{
	int res;

	res = i % 10;
	if (res < 0)
		res = -(res);
	_putchar(res + '0');
	return (res);
}

