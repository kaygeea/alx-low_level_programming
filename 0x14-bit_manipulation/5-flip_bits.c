#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @n: incoming argument for original number to be flipped
 * @m: incoming argument for number which n is to be flipped to
 *
 * Return: number of bit to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, numFlips = 0;
	unsigned long int j = sizeof(unsigned long int) * 8;

	for (i = 0; i < j; i++)
	{
		if ((m & 1) != (n & 1))
			numFlips += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (numFlips);
}
