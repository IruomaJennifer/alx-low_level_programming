#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal representation
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int num = 1;

	if (n > 1)
		print_binary(n >> 1);
	if (n & num)
		_putchar('1');
	else
		_putchar('0');
}

