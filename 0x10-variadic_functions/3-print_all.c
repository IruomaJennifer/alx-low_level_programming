#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything
 * @format: pointer to char
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	int i, flag = 0;
	char *s;

	va_start(arg, format);
	switch (*format)
	{
		case 's':
			flag = 1;
			s = va_arg(arg, char *);
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		case 'i':
			flag = 1;
			printf("%d", va_arg(arg, int));
			break;
		case 'f':
			flag = 1;
			printf("%f", va_arg(arg, double));
			break;
		case 'c':
			flag = 1;
			printf("%c", va_arg(arg, int));
			break;
		default:
			flag = 0;
	}
	i = 1;
	while (*(format + i) != '\0' && format)
	{
		while (flag)
		{
			printf(", ");
			break;
		}
		switch (*(format + i))
		{
			case 's':
				flag = 1;
				s = va_arg(arg, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
			case 'i':
				flag = 1;
				printf("%d", va_arg(arg, int));
				break;
			case 'f':
				flag = 1;
				printf("%f", va_arg(arg, double));
				break;
			case 'c':
				flag = 1;
				printf("%c", va_arg(arg, int));
				break;
			default:
				flag = 0;
		}
		i++;
	}
	va_end(arg);
	printf("\n");
}
