#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number whose bit is to be returned
 * @index: the index of the bit to return
 *
 * Return: an int thats either 0 or 1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	int value;

	if (index >= sizeof(n) * 8)
		return (-1);
	while (i < index)
	{
		n >>= 1;
		i++;
	}
	value = (n & 1);
	return (value);
}

