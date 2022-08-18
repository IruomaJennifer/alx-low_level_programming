#include "main.h"

/**
  * _strlen - function to get the length of a string
  * @c: pointer to char
  *
  * Return: the length of the string
  */
int _strlen(const char *c)
{
	int i = 0;

	while (c[i++])
		;
	return (i - 1);
}

/**
 * _pow - function to get the exponent of a number
 * @num: number to be exponentiated
 * @power: power to raise the number to
 *
 * Return: an unsigned int
 */
unsigned int _pow(unsigned int num, int power)
{
	unsigned int result = 1;

	while (power >= 1)
	{
		result *= num;
		power--;
	}
	return (result);
}

/**
 * binary_to_uint - function to convert a binary number to an unsigned int
 * @b: pointer to char holding the binary string
 *
 * Return: the converted number or 0 if
 * b is null or string contains any character other than 0 and 1
 */
unsigned int binary_to_uint(const char *b)
{
	int len, power, i = 0;
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	len = _strlen(b);
	power = len - 1;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result += (b[i] - '0') * _pow(2, power);
		i++;
		power--;
	}
	return (result);
}

