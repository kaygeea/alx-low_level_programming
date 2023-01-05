#include "main.h"

/**
 * _puts_recursion - prints a string with recursion
 * @s: incoming argument
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	else
		_puts_recursion(s + 1);
	_putchar (s);
}
