/**
 * swap_int - swaps two integers
 * @a: first int
 * @b: second int
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int buffer = *a;
	*a = *b;
	*b = buffer;
}

