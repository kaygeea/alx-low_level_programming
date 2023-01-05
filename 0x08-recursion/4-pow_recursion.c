#include "main.h"

/**
 * _pow_recursion - returns the value of an int (x),
 * raised to the power of another int (y)
 * @x: first incoming argument
 * @y: second incoming argument
 *
 * Return: the value of x to the power of y, else -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
