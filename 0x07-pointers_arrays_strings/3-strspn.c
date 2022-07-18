/**
 * _strspn - finds the no of bytes containing only of bytes from a accept
 * @s: a pointer to a char
 * @accept: pointer to accepted chars
 * Return: an unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int cnt = 0;
	int i, cont;

	for (; *s; s++)
	{
		cont = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				cnt++;
				cont = 1;
				break;
			}
		}
		if (cont == 0)
		{
			return (cnt);
		}
	}
	return (cnt);
}

