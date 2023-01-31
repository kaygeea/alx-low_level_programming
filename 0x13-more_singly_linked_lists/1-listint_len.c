#include "lists.h"
#include <stdio.h>

/**
 * listint_len - a function that counts the number of elements in a linked list
 * and returns the number
 * @h: incoming argument for linked list whose elements are to be counted
 *
 * Return: number of elements in h
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
