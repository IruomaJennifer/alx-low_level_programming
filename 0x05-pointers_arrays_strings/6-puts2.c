#include "main.h"
/**
 * puts2 - prints every other char
 * @str: pointer to a char variable
 * Return: nada
 */
void puts2(char *str)
{
	int cnt = 0;

	while (cnt >= 0)
	{
		if (*str == '\0')
		{
			_putchar('\n');
			break;
		}
		if (cnt % 2 == 0)
		_putchar(*str);
		str++;
		cnt++;
	}
}

