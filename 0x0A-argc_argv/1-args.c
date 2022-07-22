#include <stdio.h>

/**
 * main - prints no of arguments passed to it
 * @argc: an integer
 * @argv: an array of strings
 *
 * Return: an int
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

