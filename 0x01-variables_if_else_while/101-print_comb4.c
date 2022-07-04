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

	i = 48;
	j = 49;
	k = 50;
	tcnt = 0;
	while (i < 58)
	{
		while (j < 58)
		{
			while (k < 58)
			{
				if (k > j && j > i)
				{
				putchar(i);
				putchar(j);
				putchar(k);
				tcnt++;
				}
				if (tcnt != 120)
				{
				putchar(44);
				putchar(32);
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
