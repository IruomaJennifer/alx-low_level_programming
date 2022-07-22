#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: an int
 * @argv: an array of strings
 *
 * Return: an int
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (**(argv + i) == '0')
				sum += 0;
			else if (atoi(argv[i]) <= 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
		printf("%d\n", 0);
	return (0);
}
