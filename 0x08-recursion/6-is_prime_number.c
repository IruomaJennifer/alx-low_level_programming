/**
 * check_prime - function to check for prime numbers
 * @n: int number to check
 * @y: numbers less than n
 *
 * Return: an int
 */

int check_prime(int n, int y)
{
	if (y >= n)
		return (1);
	if (n % y == 0)
		return (0);
	else
		return (check_prime(n, y + 1));
}

/**
 * is_prime_number - calls check_prime to check each input
 * @n: int to check
 *
 * Return: integer 0 if not prime and 1 if prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}

