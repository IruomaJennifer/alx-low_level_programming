/**
 * factorial - factorial of a number
 * @n: an integer
 *
 * Return: an int or -1 if error occurs
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

