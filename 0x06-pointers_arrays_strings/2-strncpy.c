/**
 * _strncpy - copies a string of at most n bytes from one memory location
 * to another
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: no of bytes
 * Return: a pointer to a character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
		*(dest + i) = '\0';
	return (dest);
}
