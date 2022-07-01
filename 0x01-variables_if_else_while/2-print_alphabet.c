#include <stdio.h>

/**
 * main - entry point
 *
 * Description: function to print alphabet in lower case
 * Return: returns zero always
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
