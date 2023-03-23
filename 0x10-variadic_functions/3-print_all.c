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
	unsigned int i = 0, j, printed = 0;
	char *s;
	const char l_arg[] = "cifs";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (l_arg[j])
		{
			if (format[i] == l_arg[j] && printed)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int)), printed = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int)), printed = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double)), printed = 1;
				break;
			case 's':
				s = va_arg(args, char *), printed = 1;
				if (s != NULL)
					printf("%s", s);
				break;
					printf("(nil)");
				break;
		} i++;
	}
	va_end(args), printf("\n");
}
