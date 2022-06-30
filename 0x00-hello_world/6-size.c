#include <stdio.h>


/**
 * main - entry point
 *
 * Description: this program prints sizes of various types on the computer
 * it is compiled and run on.
 * Return: returns zero always
 */
int main(void)
{
	int i;
	char c;
	float f;
	long int li;
	long long int lli;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(lli));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}

