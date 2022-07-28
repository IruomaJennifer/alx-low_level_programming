#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of the type
 *
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int n = nmemb * size, i;

	p = malloc(n);
	if (p == NULL || nmemb == 0 || size == 0)
		return (NULL);
	for (i = 0; i < n; i++)
		*(p + i) = 0;
	return (p);
}

