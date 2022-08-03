#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to an array
 * @size: the size of array
 * @action: function that takes an int an returns void
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(*(array + i));
		}
	}
}

