#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the unsigned int
 * @index: the index of the bit
 *
 * Return: 1 on success and -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0, num = 1;

	if (index > sizeof(*n) * 8)
		return (-1);
	while (i < index)
	{
		num <<= 1;
		i++;
	}
	*n &= ~num;
	return (1);
}
