#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: parameter given
 */
void print_diagonal(int n)
{
	int a = 0;
	int b;

	if (n > 0)
	{
		for (; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
