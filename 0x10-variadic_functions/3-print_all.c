#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints all arguments
 * @format: list of types of argument
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	char *string;
	va_list args;

	i = 0;

	va_start(args, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c, ", va_arg(args, int));
				break;
			case 'i':
				printf("%d, ", va_arg(args, int));
				break;
			case 's':
				string = va_arg(args, char *);
				if (string == NULL)
					printf("(nil)");
				else
					printf("%s", string);
				break;
			default:
				break;
		}
		i++;
	}

	va_end(args);

	printf("\n");
}

