#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: incoming subject string
 * @b: incoming argument for value to be set
 * @n: incoming argument for bytes to be filled
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}
	return (s);
}
