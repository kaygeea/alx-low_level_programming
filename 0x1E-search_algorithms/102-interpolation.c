#include "search_algos.h"

/**
 * interpolation_search - Uses a Interpolation Search Algorithm (ISA) to search
 *                        for a value in an sorted array of integers.
 *
 * @array: Incoming arg for a pointer to first elem of array to be searched.
 * @size: Incoming argument for number of elems in the array to be searched.
 * @value: Incoming argument for value to be for in array.
 *
 * For probe position: size_t pos = low + (((double)(high - low) / (array[high]
 *                     - array[low])) * (value - array[low]))
 *
 * Return: 1st index where value is located, or -1 otherwise.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		i = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}

	return (-1);
}
