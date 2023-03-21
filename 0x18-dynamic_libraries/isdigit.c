#include "main.h"

/**
 * _isdigit - check, to Return 1 if c is a digit
 * @c: unsigned int value to be compared with ASCII value
 *
 * Return: 1 if alphabet; 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
