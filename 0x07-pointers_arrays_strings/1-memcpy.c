/**
 * _memcpy - copies n bytes from memory area src to dest
 * @dest: pointer to a char
 * @src: pointer to a char
 * @n: unsigned int
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *v = dest;

	for (i = 0; i < n; i++)
	{
		*(v + i) = *(src + i);
	}
	return (dest);
}

