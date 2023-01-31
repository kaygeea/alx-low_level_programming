#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - a function that frees a linked list
 * @head: incoming argument for pointer to linked list to be freed
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	/**
	 * declare var to iterate list and free each node individually,
	 * freeing *head directly, will terminate access to list
	 */
	listint_t *temp = head;

	if (temp->next == NULL)
	{
		free(head);
	}
	else
	{
		while ((temp = head) != NULL)
		{
			head = head->next;
			free(temp);
		}
	}
}
