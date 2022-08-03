#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to function that takes an int and returns an int
 *
 * Return: nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(*(array + index)))
				return (index);
		}
	}
	return (-1);
}

