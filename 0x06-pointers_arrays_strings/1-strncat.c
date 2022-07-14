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
 * _strncat - concatenates two strings
 * @dest: the destnation string
 * @src: the source string
 * @n: the max no of bytes
 * Return: a pointer to a char type
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = _strlen(dest);
	int i;
	char *p;

	p = dest + len;
	for (i = 0; i < n && *src != '\0'; i++)
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return (dest);
}

