#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program to print all single digit numbers of base 10
 * Return: returns 0
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
