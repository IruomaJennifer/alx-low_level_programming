#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: first element
 * @max: last element
 *
 * Elements should be ordered from min to max
 * Return: a pointer to integer
 */

int *array_range(int min, int max)
{
	int *p, i, j;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * ((max - min) + 1));
	if (p == NULL)
		return (NULL);
	for (i = min, j = 0; i <= max; i++, j++)
	{
		*(p + j) = i;
	}
	return (p);
}

