#include "function_pointers.h"

/**
 * int_index - calls back the cmp function and returns the index of the first
 * element of the array for which the cmp function doesnt't return 0
 * @array: incoming argument for array to be operated on with the cmp function
 * @size: number of elements in array
 * @cmp: pointer to function to be executed
 *
 * Return: index of the first element for which cmp does not return 0, or 1- if
 * no element matches or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 1; i < size; i++)
		{
		if (cmp(array[i]) != 0)
			return (i);
		}
	}
	return (-1);
}
