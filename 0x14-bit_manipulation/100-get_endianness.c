#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian and 1 if little
 */
int get_endianness(void)
{
	unsigned int num = 2;
	char c;

	c = (char)num;
	if (c)
	return (1);
	else
		return (0);
}

