#include "lists.h"
#include <stdlib.h>

/**
 * free_list - a function that frees a linked list
 * @head: incoming argument for head pointer to list_t
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *itNode;

	while ((itNode = head) != NULL)
	{
		head = head->next;
		free(itNode->str);
		free(itNode);
	}
}
