#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a function that prints anything
 * @format: incoming argument for types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j, k = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && k)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int)), k = 1;
			break;
		case 'i':
			printf("%d", va_arg(args, int)), k = 1;
			break;
		case 'f':
			printf("%f", va_arg(args, double)), k = 1;
			break;
		case 's':
			str = va_arg(args, char *), k = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(args);
}
