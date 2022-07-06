#include <stdio.h>

/**
 * main - entry point
 * Return: nothing
 */
int main(void)
{
	int sum = 0, i;

	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0)
			sum = sum + i;
		if (i % 5 == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}

