/**
 * _memset - fills the first n bytes of a memory area with constant byte b
 * @s: pointer to a character
 * @b: a char variable
 * @n: an unsigned integer variable
 * Return: a pointer to a character
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *v = s;

	for (i = 0; i < n; i++)
	{
		*v = b;
		v++;
	}
	return (s);
}

