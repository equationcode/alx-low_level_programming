#include "lists.h"

/**
 * free_listint2 - function that frees a linked list
 * @head: the first listint_t list to be freed
 *
 * Return: 0 on success
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
	head = 0;
}
