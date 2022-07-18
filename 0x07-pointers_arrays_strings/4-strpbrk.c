/**
 * _strpbrk - locates the first occurrence in the string s of any bytes
 * in the string accept
 * @s: pointer to char
 * @accept: pointer to char
 * Return: pointer to char
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
		if (*s == accept[i])
			return (s);
		}
		s++;
	}
	return ('\0');
}

