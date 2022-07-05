#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c:an integer representation of a char
 *
 * Return: 1 if c is lowercase
 * 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

