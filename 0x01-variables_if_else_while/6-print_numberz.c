#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program to print 0 to 9 but is followed by a newline
 * character
 * Return:wq: returns 0
 */
int main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
	putchar(i);
	i++;
	}
	putchar('\n');
	return (0);
}
