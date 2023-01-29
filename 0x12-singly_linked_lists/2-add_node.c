#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - a function that adds a new node at the beginning of a linked list
 * @head: incoming argument for address of head ptr of linked list
 * @str: incoming argument for string to be stored in linked list
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int i = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	while (str[i])
		i++;

	newNode->str = strdup(str);
	newNode->len = i;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
