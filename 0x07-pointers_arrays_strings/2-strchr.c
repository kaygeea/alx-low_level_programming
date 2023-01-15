#include "main.h"
#include <string.h>

/**
 * _strchr - a function that locates a character in a string
 * @s: incoming string argument
 * @c: incoming argument of character to be searched
 *
 * Return: a pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
