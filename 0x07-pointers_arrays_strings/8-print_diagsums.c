#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers
 * @a: incoming argument for matrix
 * @size: incoming argument for size of array
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int diagSum1 = 0;
	int diagSum2 = 0;
	int row, i;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		diagSum1 += a[i];
	}
	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		diagSum2 += a[i];
	}
	printf("%d, %d\n", diagSum1, diagSum2);
}
