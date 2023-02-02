#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to list into which node is to be inserted
 * @idx: index of the list where the new node should be added
 * @n: data element to be inserted into node
 *
 * Return: Adress of newly inserted node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *travNode;
	size_t count = 0;

	travNode = *head;
	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (!*head && !idx)
	{
		*head = newNode;
		return (newNode);
	}
	else if (!*head && idx)
	{
		newNode->next = travNode;
		*head = newNode;
		return (newNode);
	}
	while (count < (idx - 1))
	{
		travNode = travNode->next;
		count++;
	}
	newNode->next = travNode->next;
	travNode->next = newNode;
	return (newNode);
}
