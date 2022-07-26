#include <stdlib.h>

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
 * argstostr - function to concatenate all arguments of a program
 * @ac: int number of arguments
 * @av: an array of pointers to char
 * Return: a pointer to char
 */
char *argstostr(int ac, char **av)
{
	char *newstr, *buffer;
	int i, j, len, totlen = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		totlen += (_strlen(av[i]) + 1);

	newstr = malloc(sizeof(char) * (totlen + 1));
	buffer = newstr;
	if (newstr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = _strlen(av[i]);
		for (j = 0; j < len ; j++)
		{
			*buffer  = av[i][j];
			buffer++;
		}
		*buffer = '\n';
		buffer++;
	}
	*buffer = '\0';
	return (newstr);
}

