#include <stdio.h>

/**
 * main - entry point
 * Return: 0 always
 */
int main(void)
{
	int n = 1;
	long int prev = 0;
	long int present = 1;
	long int next;

	while (n <= 98)
	{
		next = prev + present;
		if (n != 98)
		{
			printf("%lu, ", next);
		}
		else
		{
			printf("%lu", next);
		}
		prev = present;
		present = next;
		n++;
	}
	printf("\n");
	return (0);
}

