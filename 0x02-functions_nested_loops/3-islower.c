#include "main.h"

/**
 * _islower - checks for lowercase character; and
 * returns 1 if YES, and 0 if otherwise.
 * @c: Is the int value to be compared with the ASCII value.
 *
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
