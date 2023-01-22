#include "3-calc.h"

/**
 * op_add - function to add two numbers
 * @a: incoming argument for first number
 * @b: incoming argument for second number
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	int r;

	r = a + b;
	return (r);
}

/**
 * op_sub - function to subtract two numbers
 * @a: incoming argument for first number
 * @b: incoming argument for second number
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	int r;

	r = a - b;
	return (r);
}

/**
 * op_mul - function to multiply two numbers
 * @a: incoming argument for first number
 * @b: incoming argument for second number
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	int r;

	r = a * b;
	return (r);
}

/**
 * op_div - function to divide two numbers
 * @a: incoming argument for first number
 * @b: incoming argument for second number
 *
 * Return: result of division of a and b
 */
int op_div(int a, int b)
{
	int r;

	r = a / b;
	return (r);
}

/**
 * op_mod - function to apply the modular operatr in two numbers
 * @a: incoming argument for first number
 * @b: incoming argument for second number
 *
 * Return: Remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	int r;

	r = a % b;
	return (r);
}
