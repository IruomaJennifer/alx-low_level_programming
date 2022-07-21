#include <stdio.h>
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
 * is_palindrome - to check if a string is a palindrome
 * @s: pointer to a string
 *
 * Return: integer
 */
int is_palindrome(char *s)
{
	char *p = s;
	int len = _strlen(p);

	if(len == 0 || len == 1)
		return (1);
	if(*p == *(p + (len - 1)))
	{
		*(p + (len - 1)) = '\0';
		p++;
		is_palindrome(p);
	}
	return (0);
}

