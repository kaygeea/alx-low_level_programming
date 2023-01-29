#include "lists.h"
#include <stdio.h>

/**
 * list_len - a function that returns the number of elements in a linked list
 * @h: incoming argument for linked list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 1;

	if (!(h))
	{
		return (0);
	}
	else if (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
