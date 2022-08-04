#include <stdio.h>
#include <stdarg.h>

/**
 * char_checkprint - character check and print
 * @format: string
 * @arg: va_list object
 * @flag: int
 *
 * Return: void
 */

void char_checkprint(char format, va_list arg, int *flag)
{
	char *s;

	switch (format)
	{
		case 's':
			*flag = 1;
			s = va_arg(arg, char *);
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		case 'i':
			*flag = 1;
			printf("%d", va_arg(arg, int));
			break;
		case 'f':
			*flag = 1;
			printf("%f", va_arg(arg, double));
			break;
		case 'c':
			*flag = 1;
			printf("%c", va_arg(arg, int));
			break;
		default:
			*flag = 0;
	}
}


/**
 * print_all - function that prints anything
 * @format: pointer to char
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	int i = 0, flag = 0;

	va_start(arg, format);
	if (format[i])
		char_checkprint(*format, arg, &flag);
	i = 1;
	while (format[i])
	{
		while (flag)
		{
			printf(", ");
			break;
		}
		char_checkprint(*(format + i), arg, &flag);
		i++;
	}
	va_end(arg);
	printf("\n");
}
