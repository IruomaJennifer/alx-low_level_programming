#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a program
 * Return: zero
 */
int main(void)
{
	int i;
	int j;
	int k;
	int tcnt;

	tcnt = 0;
	for (i = 48; i < 58; i++)
	{
		for (j = 49; j < 58; j++)
		{
			for (k = 50; k < 58; k++)
			{
				if (k > j && j > i)
				{
				putchar(i);
				putchar(j);
				putchar(k);
				tcnt++;
				if (tcnt != 120)
				{
					putchar(44);
					putchar(32);
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
