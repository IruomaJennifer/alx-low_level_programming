#include <stdio.h>

/**
 * main - entry point
 *
 * Description - prints all possible combinations of two two-digit numbers
 * Return - zero always
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		for (j =0; j <100; j++)
		{
			if (i < j)
			{
			putchar((i / 10) + 48);
			putchar((i % 10) + 48);
			putchar(32);
			putchar((j / 10) + 48);
			putchar((j % 10) + 48);
			if (i != 98)
			{
				putchar(44);
				putchar(32);
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
