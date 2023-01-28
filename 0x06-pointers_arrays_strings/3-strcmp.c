#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second stirng
 *
 * Return: Outcome of comparisons
 */
int _strcmp(char *s1, char *s2)
{
	int i, value;

	i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}

	value = s1[i] - s2[i];
	return (value);
}
