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
	int cnt;

	i = 48;
	cnt = 48;
	while (i < 57)
	{
		j = cnt;
		while (j <= 57)
		{
			if (i == j)
			{
				j++;
			}
			putchar(i);
			putchar(j);
			if (i != 56 && i != 57)
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}
		i++;
		cnt++;
	}
	putchar('\n');
	return (0);
}
