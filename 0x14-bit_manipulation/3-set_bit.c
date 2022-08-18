#include "main.h"

/**
 * set_bit - function to set the value of a bit to 1 at a given index
 * @n: pointer to the value
 * @index: the index at which to set the value
 *
 * Return: 1 on success and -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0, num = 1;

	if (index > sizeof(*n) * 8)
		return (-1);
	while (i < index)
	{
		num <<= 1;
		i++;
	}
	*n ^= num;
	return (1);
}

