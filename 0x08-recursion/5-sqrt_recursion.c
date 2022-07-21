/**
 * _pow_two - function to check for the square root
 * @n: square
 * @y: square root
 *
 * Return: an int
 */

int _pow_two(int n, int y)
{
	if (n == 1)
		return (1);
	if (y > n / 2)
		return (-1);
	if (y * y == n)
		return (y);
	return (_pow_two(n, y + 1));
}

/**
 * _sqrt_recursion - calls _pow_two
 * @n: square
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (_pow_two(n, 1));
}

