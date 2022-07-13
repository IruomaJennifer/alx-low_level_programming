#include <stdio.h>
/**
 * print_array - prints n elements of an array
 * @a: pointer to an integer
 * @n: an int
 * Return: nada
 */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		return;
	}
	printf("%d", *a);
	for (i = 1; i < n; i++)
	{
		printf(", %d", *(a + i));
	}
	printf("\n");
}
