#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: incoming argument for size_t to be searched through for bit at index
 * @index: incoming argument for index location from which bit value is gotten
 *
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 53)
		return (-1);
	return ((n >> index) & 1);
}
