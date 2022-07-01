#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a program for headecimals
 * Return: zero
 */
int main(void)
{
	char c;

	c = '0';
	while (c < ':')
	{
		putchar(c);
		c++;
	}
	c = 'a';
	while (c < 'g')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
