#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - a funtion that deletes the node from a linked list
 * at a given index
 * @head: pointer to the linked list from which node is to be deleted
 * @index: index at which chosen node to be deleted is
 *
 * Return: 1 if node is deleted successfully, or -1 if otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *travNode = *head;
	listint_t *delNode = 0;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(travNode);
		return (1);
	}
	while (count < index - 1)
	{
		if (!travNode || !(travNode->next))
			return (-1);

		travNode = travNode->next;
		count++;
	}
	delNode = travNode->next;
	travNode->next = delNode->next;
	free(delNode);
	return (1);
}
