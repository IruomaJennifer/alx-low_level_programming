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
 * rev_string - prints a string in reverse
 * @s: pointer to a char variable
 * Return: nothing
 */
void rev_string(char *s)
{
	int len = _strlen(s);
	char *b;

	while (len > 0)
	{
		*b = *(s + (len - 1));
		b++;
		len--;
	}
	len = _strlen(s);
	while (len > 0)
	{
		*s = *(b - (len));
		s++;
		len--;
	}
}

