#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string to stdout, followed by a new line
 * @str: value of pointer
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
