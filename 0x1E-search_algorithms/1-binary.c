#include "search_algos.h"

/**
 * binary_search - Uses a Binary Search Algorithm (LSA) to search for a value
 *                 in an sorted array of integers.
 *
 * @array: Incoming arg for a pointer to first elem of array to be searched.
 * @size: Incoming argument for number of elems in the array to be searched.
 * @value: Incoming argument for value to be for in array.
 *
 * Return: 1st index where value is located, or -1 otherwise.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t idx, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
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
