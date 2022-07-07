#include "main.h"

/**
 * more_numbers - more numbers
 * Return: nothing
 */

void more_numbers(void)
{
	char c;
	int outer;
	int k, h, i;

	for (outer = 0; outer <= 9; outer++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			_putchar(c);
		}
		for (k = 10; k <= 14; k++)
		{
			i = k / 10;
			for (h = 1; h <= 2; h++)
			{
				_putchar(i + '0');
				i = k % 10;
			}
		}
		_putchar('\n');
	}
}

