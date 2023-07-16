#include "search_algos.h"

/**
 * linear_search - Uses a Linear Search Algorithm (LSA) to search for a value
 *                 in an array of integers.
 *
 * @array: Incoming arg for a pointer to first elem of array to be searched.
 * @size: Incoming argument for size of the array to be searched.
 * @value: Incoming argument for value to be for in array.
 *
 * Return: 1st index where value is located, or -1 otherwise.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (array == NULL)
	{
		return (-1);
	}

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%li] = [%i]\n", idx, array[idx]);
		if (array[idx] == value)
		{
			return (idx);
		}
	}
	return (-1);
}
