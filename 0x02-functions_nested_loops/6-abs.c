#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 * @i: an integer value
 *
 * Return: absolute value of said integer
 */
int _abs(int i)
{
	if (i < 0)
		return (-i);
	else
		return (i);
}

