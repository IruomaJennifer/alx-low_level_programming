#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: an integer for no of arguments
 * @argv: an array of pointers
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	char *fp;
	int nbytes, i;

	fp = (char *)main;
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nbytes = atoi(argv[1]);
	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < nbytes; i++)
	{
		printf("%02x", *(fp + i) & 0xFF);
		if (i != (nbytes - 1))
			printf(" ");
	}
	printf("\n");
	return (0);
}
