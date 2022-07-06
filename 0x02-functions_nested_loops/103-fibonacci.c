#include <stdio.h>

/**
 * main - entry point
 * Return: 0 always
 */
int main(void)
{
	int n = 1;
	long int prev = 0, present = 1, next = 0, sum = 0;

	while (next <= 4000000)
	{
		next = prev + present;
		if (next % 2 == 0)
		{
			sum = sum + next;
		}
		prev = present;
		present = next;
		n++;
	}
	printf("%lu\n", sum);
	return (0);
}

