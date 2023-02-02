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
	size_t i;

	travNode = *head;
	newNode = malloc(sizeof(listint_t));
	newNode->n = n;
	newNode->next = NULL;

	while (travNode->next != NULL)
	{
		count++;
		travNode = travNode->next;
	}
	while (head)
	{
		if (idx > count)
			return (NULL); /* watch out for seg fault */
		if (idx == 1)
		{
			newNode->next = *head;
			*head = newNode;
		}
		else
		{
			while (i < idx)
			{
				travNode = travNode->next;
				i++;
			}
			idx--;
			newNode->next = travNode->next;
			travNode->next = newNode;
		}
	}
	return (*head);
}
