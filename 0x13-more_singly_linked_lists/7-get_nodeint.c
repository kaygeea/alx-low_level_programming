#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node in linked list
 * @head: pointer to the linked list from which nth node is to be returned
 * @index: index of the node to be returned
 *
 * Return: pointer to index, or NULL if index is non-existent
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *travNode;
	unsigned int count = 0;

	travNode = head;
	while (travNode != NULL)
		if (index == count)
		{
			return (travNode);
			travNode = travNode->next;
			count++;
		}
	return (travNode);
}
