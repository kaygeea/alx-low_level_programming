#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to concatenate
 *
 * Return: pointer to concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, a;

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (a = 0; a < n && src[a] != '\0'; a++, length++)
	{
		dest[length] = src[a];
	}
	dest[length] = '\0';
	return (dest);
}
