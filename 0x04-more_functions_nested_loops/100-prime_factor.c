#include <stdio.h>

/**
 * main - entry
 * Return: void
 */

int main(void)
{
	long int num = 612852475143;
	long int fact = 3;

	while (fact < num)
	{
		if (num % fact == 0)
		{
			num = num / fact;
		}
		fact++;
	}
	printf("%ld\n", fact);
	return (0);
}
