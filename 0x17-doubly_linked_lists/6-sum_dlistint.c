#include "lists.h"

/**
 * sum_dlistint - function that returns returns the sum of all the data (n)
 * of a dlistint linked list.
 * @head: header pointer
 * Return: If the list is empty, return 0.
 *
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	/* while we have a pointer to the list */
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
