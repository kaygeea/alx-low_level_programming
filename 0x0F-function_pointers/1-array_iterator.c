#include "function_pointers.h"

/**
 * array_iterator - program that iterates through array and executes functions
 * @array: incoming argument for array to be iterated through
 * @size: size of incoming array argument
 * @action: pointer to function to be executed on iteration
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
