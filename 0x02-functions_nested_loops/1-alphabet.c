#include "main.h"

/**
 * main - function to print the alphabet in lowercase
 *
 *Return: nothing
 */
void print_alphabet(void)
{
	char c;

	c = 97;
	while (c < 123)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return;
}

