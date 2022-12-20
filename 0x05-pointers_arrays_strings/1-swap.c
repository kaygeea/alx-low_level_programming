#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: first value to be provided
 * @b: Second value to be provided
 * int c: new address of swapped integer value
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
