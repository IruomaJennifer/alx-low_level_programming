#include <stdio.h>

/**
 * method - entry point
 * Return: nothing
 */
void method(void)
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
}

