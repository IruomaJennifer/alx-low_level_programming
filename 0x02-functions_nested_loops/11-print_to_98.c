#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: an integer
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	int input;

	if (n < 98)
	{
		input = n;
		while (input <= 98)
		{
			if (input != 98)
			{
				printf("%d, ", input);
			}
			else
			{
				printf("%d\n", input);
			}
			input++;
		}
	}
	else
	{
		input = n;
		while (input >= 98)
		{
			if (input != 98)
			{
				printf("%d, ", input);
			}
			else
			{
				printf("%d\n", input);
			}
			input--;
		}
	}
}
