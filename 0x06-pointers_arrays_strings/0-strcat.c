#include "main.h"
#include <stdio.h>

/**
 * _strcat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int length, a;

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (a = 0; src[a] != '\0'; a++, length++)
	{
		dest[length] = src[a];
	}
	dest[length] = '\0';
	return (dest);
}
