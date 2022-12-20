#include "main.h"
#include <stdio.h>

/**
 * _strlen - prints the length of a string
 * @s: string provided
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
