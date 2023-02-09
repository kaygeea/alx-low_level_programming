#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: incoming argument for unsigned long int holding bit value to be changed
 * @index: incoming argument for index at which bit to be changed is located
 *
 * Return: 1 on success, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 53 || !n)
		return (-1);
	(*n |= 1 << index);
	return (1);
}
