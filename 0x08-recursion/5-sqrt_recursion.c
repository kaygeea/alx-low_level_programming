#include "main.h"

/**
 * find_sqrt - Finds the square root of two numbers
 * @x: incoming argument
 * @y: value with which to test for the square root of x
 * Return: square root of x
 */
int find_sqrt(int x, int y)
{
	if (y * y > x)
		return (-1);
	else if (y * y == x)
		return (y);
	else
		return (find_sqrt(x, y + 1));
	return (1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: incoming argument
 * find_sqrt - Finds the square root of two numbers
 *
 * Return: natural square root on n, or -1 if impossible
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (find_sqrt(n, 1));
}
