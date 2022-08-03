#include "3-calc.h"

/**
 * main - entry point
 * @argc: an integer representing the number of parameters
 * @argv: a pointer to char pointer
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*fp)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	fp = get_op_func(argv[2]);

	if (fp != NULL)
	{
		result = fp(a, b);
		printf("%i\n", result);
		return (0);
	}
	printf("Error\n");
	exit(99);
}

