#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program to print lowercase alphabet in reverse
 * Return: returns 0
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
