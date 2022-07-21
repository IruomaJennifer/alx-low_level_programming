/**
  * isnotnull - checks if its a non null char
  * @s: pointer to string
  *
  * Return: 0 if null, else 1
  */
int isnotnull(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1);
}

/**
 * _strlen_recursion - gets the length of a string
 * @s: pointer to the string
 *
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (isnotnull(s) + _strlen_recursion(s + 1));
}

