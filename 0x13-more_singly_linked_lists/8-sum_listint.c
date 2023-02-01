#include "lists.h"

/**
 * sum_listint - a function that sums all the data in a linked list and returns
 * the value
 * @head: pointer to the list whose data elements are to be summed
 *
 * Return: Sum of all data of head, or NULL if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *travNode = head;
	int sum = 0;

	if (!(head))
	{
		return (0);
	}

	while (travNode)
	{
		sum += travNode->n;
		travNode = travNode->next;
	}
	return (sum);
}
