#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char a = 'a' , b;
	while (a <= 'z')
	{
		b = 1;
		while (b <= 10)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}
}
