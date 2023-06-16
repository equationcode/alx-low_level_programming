#include "lists.h"

/**
 * free_dlistint - a function that frees dlistint list.
 * @head: header pointer
 * Return: 0 on success
 *
 */

void free_dlistint(dlistint_t *head)
{
	/* check if head is NULL and return if so */
	while (head != NULL)
	{
		/* traverse the list freeing each node */
		dlistint_t *next = head->next;

		free(head);

		head = next;
	}
}
