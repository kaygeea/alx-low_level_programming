#include "main.h"

/**
 * print_line - draws a straight line on the terminal
 * @n: number of times the character '_' should be printed
 */
void print_line(int n)
{
	int a = 1;

	if (a <= n)
	{
		_putchar(95);
		a++;
	}
	_putchar('\n');
}
