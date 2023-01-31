#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - a function that frees a linked list
 * @head: a pointer to the linked list to be free
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
