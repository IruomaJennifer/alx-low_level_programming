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
 * puts_half - prints half of a string
 * @str: a pointer to a string
 * Return: nada
 */
void puts_half(char *str)
{
int len = _strlen(str);
int n = 0;

if (len % 2 == 0)
{
n = len / 2;
while (n < len)
{
_putchar(*(str + n));
n++;
}
_putchar('\n');
}
else
{
n = (len - 1) / 2;
while ((n + 1) < len)
{
_putchar(*(str + (n + 1)));
n++;
}
_putchar('\n');
}
}
