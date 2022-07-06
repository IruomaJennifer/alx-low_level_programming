#include <stdio.h>

/**
 * main - entry point
 * Return: 0 always
 */
int main(void)
{
	int n = 1;
	int prev = 0;
	int present = 1;
	int next;

	while (n <= 50)
	{
		next = present + prev;
		if ( n != 50)
		{
			printf("%d, ", next);
		}
		else
		{
			printf("%d", next);
		}
		prev = present;
		present = next;
		n++;
	}
	printf("\n");
	return (0);
}

