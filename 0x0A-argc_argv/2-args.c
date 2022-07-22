#include <stdio.h>

/**
 * main - function to print all arguments it recieves
 * @argc: int
 * @argv: array of strings
 *
 * Return: an int
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

