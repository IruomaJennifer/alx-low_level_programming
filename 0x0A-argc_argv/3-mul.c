#include <stdio.h>
#include <stdlib.h>
/**
 * main - program to multiply two numbers
 * @argc: an int
 * @argv: an array of strings
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

