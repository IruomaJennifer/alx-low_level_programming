/**
 * _strlen - to get the length of a string
 * @s: a pointer to a character
 * Return: an int
 */
int _strlen(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (0);
	if (*s != '\0')
	{
		len++;
	}
	return (len + _strlen(s + 1));
}
/**
 * check_is_palindrome - to check if a string is a palindrome
 * @s: pointer to a string
 * @len: length of the string
 *
 * Return: integer
 */
int check_is_palindrome(char *s, int len)
{

	if (len == 0 || len == 1)
		return (1);
	if (s[0] == s[len - 1])
	{
		return (check_is_palindrome(s + 1, len - 2));
	}
	return (0);
}
/**
 * is_palindrome - calls check_is_palindrome
 * @s: pointer to a string
 * Return: int
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_is_palindrome(s, _strlen(s)));
}

