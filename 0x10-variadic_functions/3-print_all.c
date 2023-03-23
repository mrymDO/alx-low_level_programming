#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	char *s, *sep = "";

	va_start(args, format);

	if (format)
	{
		i = 0;
		while (format[i])
		{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s != NULL)
					printf("%s%s", sep, s);
				else
					printf("(nil)");
				break;
			default:
				break;
		}
		sep = ", ";
		i++;
		}
	}
	va_end(args);
	printf("\n");
}
