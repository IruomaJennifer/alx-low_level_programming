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
 * puts2 - prints every other char
 * @str: pointer to a char variable
 * Return: nada
 */
void puts2(char *str)
{
	int len = _strlen(str);
	int cnt = 0;

	while (cnt <= len)
	{
		if (*str == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(*str);
		str += 2;
	}
}

