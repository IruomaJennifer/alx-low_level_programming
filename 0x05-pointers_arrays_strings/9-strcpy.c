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
 * _strcpy - copies a string from one memory location to another
 * @dest: destination string pointer
 * @src: source string pointer
 * Return: nada
 */
char *_strcpy(char *dest, char *src)
{
int len = _strlen(src);
int i;

for (i = 0; i < len; i++)
{
*(dest + i) = *(src + i);
}
*(dest + len) = '\0';
return (dest);
}
