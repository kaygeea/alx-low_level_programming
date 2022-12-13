#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0
 */
int print_alphabet(void)
{
	char b = 'a';

	while (b <= 'z')
	{
		_putchar(b);
		b++;
	}
	_putchar('\n');
	return (0);
}
