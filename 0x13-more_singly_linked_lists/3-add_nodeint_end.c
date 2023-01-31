#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint_end - a function that adds a new node at the end of a list
 * @head: pointer to the list to which new node is to be added
 * @n: incoming argument for data to be stored in new node
 *
 * Return: address of the new element, or NULL if operation failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode; /* declare new node to be added */
	listint_t *temp; /* temp pointer also to traverse list, protect head */

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL) /* condition in case of a failed operation */
	{
		return (NULL);
	}
	/* initialize newNode */
	newNode->n = n;
	newNode->next = NULL;

	/* now traverse list with temp until end of list, to add newNode */
	temp = *head; /* initialize temp to head pointer of existing link */
	if (temp == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
	}
	return (*head);
}
