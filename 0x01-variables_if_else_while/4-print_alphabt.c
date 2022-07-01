#include <stdio.h>

/**
 * main - entry point
 *
 * Description: function to print out all alphabet in lower case except
 * q and e
 * Return: returns zero always
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
