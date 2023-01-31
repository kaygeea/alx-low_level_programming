#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - a function that adds a new node at the beginning of a list
 * @head: pointer to the list to which new node is to be added
 * @n: incoming argument for data to be stored in new node
 *
 * Return: address of the new element, or NULL if operation failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
