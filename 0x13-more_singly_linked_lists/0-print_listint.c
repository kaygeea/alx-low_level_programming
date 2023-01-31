#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all the elements of a linked list
 * @h: incoming argument for linked list
 *
 * Return: number of nodes in list as size_t
 */
size_t print_listint(const listint_t *h)
{
	unsigned int nodes = 0;
	const listint_t *temp = h;

	while (h)
	{
		if (h == NULL)
		{
			printf("Empty node\n");
		}
		else if (temp != NULL)
		{
			printf("%d\n", temp->n);
			temp = temp->next;
		}
		nodes++;
		h = h->next;
	}
	return (nodes);
}
