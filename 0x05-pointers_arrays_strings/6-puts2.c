#include "main.h"

/**
 * puts2 - prints every other char
 * @str: pointer to a char variable
 * Return: nada
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		if (*str % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
	}
	_putchar('\n');
}

