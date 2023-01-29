#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - a function that adds a new node at the end of a linked list
 * @head: incoming argument for address of head ptr of linked list
 * @str: incoming argument for string to be stored in linked list
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *endNode;
	list_t *temp;
	unsigned int i = 0;

	temp = *head;

	endNode = malloc(sizeof(list_t));
	if (endNode == NULL)
	{
		return (NULL);
	}

	while (str[i])
		i++;

	endNode->str = strdup(str);
	endNode->len = i;
	endNode->next = NULL;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = endNode;

	return (endNode);
}
