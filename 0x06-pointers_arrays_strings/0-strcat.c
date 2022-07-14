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
 * _strcat - concatenates two strings
 * @dest: the destnation string
 * @src: the source string
 * Return: a pointer to a char type
 */

char *_strcat(char *dest, char *src)
{
	int len = _strlen(dest);
	char *p;

	p = dest + len;
	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return (dest);
}

