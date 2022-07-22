#include <stdio.h>
#include <stdlib.h>
/**
 * cnv_str - function to convert strings to int
 * @c: a pointer to a string
 *
 * Return: an int
 */
int cnv_str(char *c)
{
	int no = 0;

	while (*c != '\0')
	{
		if (*c >= '0' && *c <= '9')
		{
			no = (10 * no) + (*c - '0');
		}
		else
		{
			return (0);
		}
		c++;
	}
	return (no);
}

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
			if (cnv_str(*(argv + i)) == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += cnv_str(*(argv + i));

		}
		printf("%d\n", sum);
	}
	else
		printf("%d\n", 0);
	return (0);
}
