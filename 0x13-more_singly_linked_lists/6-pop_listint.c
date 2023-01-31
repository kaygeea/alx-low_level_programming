#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function that deletes the head node of a linked list
 * @head: pointer to the linked list from which head node is to be deleted
 *
 * Return: returns the data of the deleted node, or 0 if head is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int headn;

	if (*head == NULL)
		return (0);

	headn = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (headn);
}
