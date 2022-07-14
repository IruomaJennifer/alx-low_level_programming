/**
 * leet - encodes a string into 1337
 * @s: a pointer to a char
 * Return: a pointer to a char
 */
char *leet(char *s)
{
	char l[] = {'a', 'e', 'o', 't', 'l'};
	char n[] = {'4', '3', '0', '7', '1'};
	int i, cnt;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (cnt = 0; cnt < 5; cnt++)
		{
			if (*(s + i) == l[cnt] || *(s + i) == (l[cnt] - 32))
				*(s + i) = n[cnt];
		}
	}
	return (s);
}

