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
 * _strdup - copy a string to new memory location
 * @str: string to be copied
 *
 * Return: pointer to a char array
 */
char *_strdup(char *str)
{
	int i, len;
	char *newstr;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);
	newstr = malloc((len * sizeof(char)) + 1);
	if (newstr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		newstr[i] = str[i];
	newstr[i] = '\0';
	return (newstr);
}

