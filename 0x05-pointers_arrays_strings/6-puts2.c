#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints a string to stdout, followed by a new line
 * @str: pointer value
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
