#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: incoming argument for unsigned long int holding bit value to be set
 * @index: incoming argument for index at which bit to be set is located
 *
 * Return: 1 on success, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int set;

	if (index > 53 || !n)
		return (-1);
	set = 1 << index;
	*n = (*n & ~set) | ((0 << index) & set);
	return (1);
}
