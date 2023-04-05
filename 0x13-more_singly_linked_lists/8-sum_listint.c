#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the
 * data (n) in a linked list
 * @head: the first node of the linked list
 *
 * Return: the sum or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
