#include <stdio.h>

/**
 * main - entry point
 * Return: 0 always
 */
int main(void)
{
	int n = 1;
	unsigned long int prev = 1;
	unsigned long int tr = 1000000000;
	unsigned long int next = 2, prev1, prev2, next1, next2;

	printf("%lu", prev);
	for (n = 0; n <= 91; n++)
	{
		printf(", %lu", next);
		next += prev;
		prev = next - prev;
	}
	prev1 = prev / tr;
	prev2 = prev % tr;
	next1 = next / tr;
	next2 = next % tr;
	for (n = 92; n < 99; ++n)
	{
		printf(", %lu", next1 + (next2 / tr));
		printf("%lu", next2 % tr);
		next1 = next1 + prev1;
		prev1 = next1 - prev1;
		next2 = next2 + prev2;
		prev2 = next2 - prev2;
	}

	printf("\n");
	return (0);
}

