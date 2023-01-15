#include "main.h"
#include <string.h>

/**
 * _strpbrk - function to locate the first occurrence of a specified character
 * from the second string argument, within the first string argument
 * @s: string to be compared against
 * @accept: source string from which character to be located is specified
 *
 * Return: pointer to the matched character in s, or NULL if no match is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
		i++;
	}
	return (NULL);
}
