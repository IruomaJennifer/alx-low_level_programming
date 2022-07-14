#include <stdio.h>
/**
 * reverse_array - reverses the content of an array
 * @a: a pointer to an integer
 * @n: an integer
 * Return: nada
 */

void reverse_array(int *a, int n)
{
	int k;
	int j;

	for (j = 0; j < n / 2; j++)
	{
		k = a[j];
		a[j] = a[n - 1 - j];
		a[n - 1 - j] = k;
	}
}

