#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to print the minimum number of coins to make change
 * for some money
 * @argc: an integer
 * @argv: an array of strings
 *
 * Return: an int
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int values[] = {25, 10, 5, 2, 1};
	unsigned int no_coins = 0, amt, remainder;

	if (argc == 2)
	{
		amt = atoi(*(argv + 1));
		for (i = 0; i < 5; i++)
		{
			if (amt >= values[i])
			{
				no_coins += amt / values[i];
				remainder = amt % values[i];
			}
			else
				continue;
			if (remainder == 0)
				break;
			amt = remainder;
		}
		printf("%d\n", no_coins);
		return (0);
	}
	else if (atoi(*(argv + 1)) < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

