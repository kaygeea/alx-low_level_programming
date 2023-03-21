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
	int value, i = 0;

	value = s1[i] - s2[i];

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			value = 1;
			break;
		}
	}
	if (value == 1)
		return (value);
	else
		return (value);
}
