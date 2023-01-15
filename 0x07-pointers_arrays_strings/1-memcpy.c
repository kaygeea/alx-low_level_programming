#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: incoming argument for number of bytes to be copied
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/*typecast incoming argument for respective memories*/

	char *typcstsrc = (char *)src;
	char *typcstdest = (char *)dest;

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		typcstdest[i] = typcstsrc[i];
	}
	return (typcstdest);
}
