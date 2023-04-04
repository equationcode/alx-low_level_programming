#include "lists.h"

/**
 * free_listint - function that frees a linked list
 * @head: first element of the linkec list
 *
 * Return: 0 on success
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
