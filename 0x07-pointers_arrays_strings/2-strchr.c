/**
 * _strchr - finds the first occurrence of a char in a string
 * @s: pointer to a char
 * @c: a char variable
 * Return: a pointer to a char
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ('\0');
}

