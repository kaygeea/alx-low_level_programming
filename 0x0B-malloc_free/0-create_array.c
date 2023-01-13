#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: incoming argument for size of array
 * @c: incoming argument for chars in array
 *
 * Return: a pointer to the array, or NULL if array is size 0
 */
char *create_array(unsigned int size, char c)
{
	char *temp;
	unsigned int mark;

	if (size == 0)
		return (NULL);
	temp = (char *) malloc(size * sizeof(c));
	if (temp == 0)
	{
		return (NULL);
	}
	else
	{
		mark = 0;
		while (mark < size)
		{
			*(temp + mark) = c;
			mark++;
		}
		return (temp);
	}
}
