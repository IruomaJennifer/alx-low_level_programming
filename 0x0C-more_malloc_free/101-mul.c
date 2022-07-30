#include <stdlib.h>
#include "main.h"
void printproduct(int *, int);
/**
 * _strlen - to get the length of a string
 * @s: a pointer to a character
 * Return: an int
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _isdigit - checks that all string sequence is made up of digits
 * @s: pointer to char
 *
 * Return: an integer if true and 0 if false
 */
int _isdigit(char *s)
{
	int cnt;

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
			cnt++;
		else
			return (0);
		s++;
	}
	return (cnt);
}

/**
  * initialize - initialize memory location with 0
  * @keep: pointer to int
  * @size: size of memory
  *
  * Return: nothing
  */
void initialize(int *keep, int size)
{
	int i;

	for (i = 0; i < size; i++)
		keep[i] = 0;
}

/**
 * multiply - multiplies two positive numbers
 * @args: a char pointer to pointer or an array of pointers
 * Return: int
 */
int multiply(char **args)
{
	char *s1 = *(args + 1);
	char *s2 = *(args + 2);
	int i, j, digit1, digit2, carry, *keep, len1, len2;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	keep = malloc(sizeof(int) * (len1 + len2));
	if (keep == 0)
		return (1);
	initialize(keep, len1 + len2);
	for (i = len1 - 1; i >= 0; i--)
	{
		digit1 = s1[i] - '0';
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			digit2 = s2[j] - '0';
			carry += keep[i + j + 1] + (digit1 * digit2);
			keep[i + j + 1] = carry % 10;
			carry = carry / 10;
		}
		if (carry > 0)
			keep[i + j + 1] += carry;
	}
	printproduct(keep, len1 + len2);
	free(keep);
	return (0);
}

/**
 * printerr - prints error
 */
void printerr(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
}

/**
 * printproduct - prints a product to the console
 * @keep: result to print, pointer to int
 * @size: size of memory
 *
 * Return: nothing
 */
void printproduct(int *keep, int size)
{
	int i;

	for (i = 0; i < size; i++)
		_putchar(keep[i] + '0');
	_putchar('\n');
}

/**
 * main - entry point
 * @argc: no of parameters
 * @argv: char pointer to pointer
 *
 * Return: int 0 for success and 1 for fail
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int i;

	if (argc < 3)
	{
		printerr();
		exit(98);
	}

	s1 = argv[1];
	s2 = argv[2];
	if (_isdigit(s1) == 0 || _isdigit(s2) == 0)
	{
		printerr();
		exit(98);
	}
	i = multiply(argv);
	return (i);
}

