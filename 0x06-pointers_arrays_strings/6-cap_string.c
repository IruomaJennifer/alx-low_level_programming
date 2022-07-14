/**
 * cap_string - capitalizes all words in a string
 * @s: pointer to a char
 * Return: a pointer to a char
 */
char *cap_string(char *s)
{
	int i;

for (i = 0; *(s + i) != '\0'; i++)
{
if (*(s + i) == ' ' || *(s + i) == '\t' || *(s + i) == '\n' || *(s + i) == '(')
	continue;
else if (*(s + i) == ',' || *(s + i) == ';' || *(s + i) == '.')
	continue;
else if (*(s + i) == '!' || *(s + i) == '?' || *(s + i) == '"')
	continue;
else if (*(s + i) == '{' || *(s + i) == '}' || *(s + i) == ')')
	continue;
else
{
if (*(s + i) >= 'a' && *(s + i) <= 'z')
{
if (*(s + i - 1) == ' ' || *(s + i - 1) == '\t' || *(s + i - 1) == '\n')
	*(s + i) = *(s + i) - 32;
else if (*(s + i - 1) == ',' || *(s + i - 1) == ';' || *(s + i - 1) == '.')
	*(s + i) = *(s + i) - 32;
else if (*(s + i - 1) == ')' || *(s + i - 1) == '(')
	*(s + i) = *(s + i) - 32;
else if (*(s + i - 1) == '!' || *(s + i - 1) == '?' || *(s + i - 1) == '"')
	*(s + i) = *(s + i) - 32;
else if (*(s + i - 1) == '{' || *(s + i - 1) == '}')
	*(s + i) = *(s + i) - 32;
}
}
}
	return (s);
}
