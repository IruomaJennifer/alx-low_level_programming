/**
 * rot13 - function to encode a string using rot13
 * @s: a pointer to a string
 * Return: a pointer to a string
 */

char *rot13(char *s)
{
	char s1[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
		'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
		'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
		'V', 'W', 'X', 'Y', 'Z'};
	char s2[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
		'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
		'k', 'l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
		'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
		'I', 'J', 'K', 'L', 'M'};
	int i, j;

	i = 0;
	while (*(s + i) != '\0')
	{
		for (j = 0; j < 52 && ((*(s + i) >= 97 && *(s + i) <= 122) ||
			(*(s + i) >= 65 && *(s + i) <= 90)); j++)
		{
			if (*(s + i) == s1[j])
			{
				*(s + i) = s2[j];
				break;
			}
		}
		i++;
	}
	return (s);
}

