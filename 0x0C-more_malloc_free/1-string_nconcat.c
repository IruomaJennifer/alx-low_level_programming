#include <stdlib.h>

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
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: a number of bytes
 *
 * Returns s1 and a given n bytes of s2
 * Return: a pointer to char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int len, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= (unsigned int)_strlen(s2))
		len = _strlen(s1) + _strlen(s2);
	else
		len = _strlen(s1) + n;

	p = malloc(len + 1);

	if (p == NULL)
		return (NULL);
	for (i = 0; i < _strlen(s1); i++)
		*(p + i) = s1[i];

	for (; i < len; i++)
	{
		*(p + i) = *s2;
		s2++;
	}
	*(p + i) = '\0';
	return (p);
}
