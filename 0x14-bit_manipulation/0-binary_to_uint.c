#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: incoming argument for pointer to string containing binary number
 *
 * Return: The converted number, or 0 if b is NULL or it contains chars other
 * rhan 0 and 1.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	size_t dec, powTwo;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
		;
	i--;
	for (powTwo = 1, dec = 0; i >= 0; i--)
	{
		if (b[i] == '0')
		{
			powTwo *= 2;
			continue;
		}
		else if (b[i] == '1')
		{
			dec += powTwo;
			powTwo *= 2;
			continue;
		}
		return (0);
	}
	return (dec);
}
