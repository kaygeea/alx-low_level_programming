#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that sums up all its argument values
 * @n: incoming argument to represent the number of arguments to be received
 * @...: indicator of the possibility of additional arguments
 *
 * Return: Sum of all argument parameters, or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int i;
	int y = 0;

	if (n == 0)
		return (0);

	va_start(sum, n);
	for (i = 0; i < n; i++)
	{
		y += va_arg(sum, int);
	}
	va_end(sum);
	return (y);
}
