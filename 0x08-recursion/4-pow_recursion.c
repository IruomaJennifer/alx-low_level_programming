/**
 * _pow_recursion - raises x to the power of y
 * @x: an integer to be raised to a power
 * @y: an integer to be the exponent
 *
 * Return: an integer or -1 when y is < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

