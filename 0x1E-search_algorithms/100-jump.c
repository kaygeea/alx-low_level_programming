#include "search_algos.h"

/**
 * binary_search - Uses a Jump Search Algorithm (JSA) to search for a value
 *                 in an sorted array of integers.
 *
 * @array: Incoming arg for a pointer to first elem of array to be searched.
 * @size: Incoming argument for number of elems in the array to be searched.
 * @value: Incoming argument for value to be for in array.
 *
 * Return: 1st index where value is located, or -1 otherwise.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t idx, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (idx = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		idx = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", idx, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; idx < jump && array[idx] < value; idx++)
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
	printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);

	return (array[idx] == value ? (int)idx : -1);
}
