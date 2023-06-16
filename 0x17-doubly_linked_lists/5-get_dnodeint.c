#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node of a dlistint
 * linked list
 * @head: header pointer
 * @index: position of node starting from 0.
 * Return: If the node does not exist, return NULL.
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;

	/* check if head is NULL */
	if (!head)
		return (NULL);

	/* while head is not NULL */
	while (head != NULL)
	{
		/* initialize search here */
		if (i == index)
			break;
		i++;
		/* make head point to next if index is not found */
		head = head->next;
	}
	/* return the node */
	return (head);
}
