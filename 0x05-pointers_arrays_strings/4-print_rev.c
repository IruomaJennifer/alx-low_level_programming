#include "main.h"
/**
 * _strlen - to get the length of a string
 * @s: a pointer to a character
 * Return: an int
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
/**
 * print_rev - prints a string in reverse
 * @s: pointer to a char variable
 * Return: nothing
 */
void print_rev(char *s)
{
	int len = _strlen(s);

	while (len > 0)
	{
		_putchar(*(s + (len - 1)));
		len--;
	}
	_putchar('\n');
}

