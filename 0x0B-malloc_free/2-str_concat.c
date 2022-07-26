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
 * str_concat - concatenates two strings
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 *
 * Return: pointer to a char array
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, lens1, lens2;
	char *newstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	lens1 = _strlen(s1);
	lens2 = _strlen(s2);
	newstr = malloc((lens1 + lens2 + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	for (i = 0; i < lens1; i++)
		newstr[i] = s1[i];
	for (j = 0; i < (lens1 + lens2); i++, j++)
		newstr[i] = s2[j];
	newstr[i] = '\0';
	return (newstr);
}

