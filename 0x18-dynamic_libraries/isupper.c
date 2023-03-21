#include "main.h"

/**
 *  _isupper - checks for uppercase character; and
 * returns 1 if YES, and 0 if otherwise
 * @c: Is the int value to be compared with the ASCII value.
 *
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
