#include "main.h"

/**
 * _isalpha - check, to Return 1 if c is alphabet
 * @c: unsigned int value to be compared with ASCII value
 * Return: 1 if alphabet; 0 if otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
