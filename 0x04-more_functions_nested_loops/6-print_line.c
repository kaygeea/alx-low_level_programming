#include "main.h"

/**
 * print_line - draws a straight line on the terminal
 * @n: number of times the character '_' should be printed
 */
void print_line(int n)
{
	int a;

	for (a = 0; a <= 25; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
