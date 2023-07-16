#include "search_algos.h"

/**
 * binary_search_mod - Uses a Binary Search Algorithm (BSA) to search for
 *                     a value in an sorted array of integers.
 *
 * @array: Incoming arg for a pointer to first elem of array to be searched.
 * @left: Incoming arg for the starting index of the [sub]array to search.
 * @right: Incoming arg the ending index of the [sub]array to search.
 * @value: Incoming argument for value to be for in array.
 *
 * Return: 1st index where value is located, or -1 otherwise.
 */
int binary_search_mod(int *array, size_t left, size_t right, int value)
{
	size_t idx;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (idx = left; idx < right; idx++)
			printf("%d, ", array[idx]);
		printf("%d\n", array[idx]);

		idx = left + (right - left) / 2;
		if (array[idx] == value)
			return (idx);
		if (array[idx] > value)
			right = idx - 1;
		else
			left = idx + 1;
	}

	return (-1);
}
/**
 * exponential_search - Uses a Exponential Search Algorithm (ESA) to search for
 *                      a value in an sorted array of integers.
 *
 * @array: Incoming arg for a pointer to first elem of array to be searched.
 * @size: Incoming argument for number of elems in the array to be searched.
 * @value: Incoming argument for value to be for in array.
 *
 * Return: 1st index where value is located, or -1 otherwise.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (binary_search_mod(array, i / 2, right, value));
}
