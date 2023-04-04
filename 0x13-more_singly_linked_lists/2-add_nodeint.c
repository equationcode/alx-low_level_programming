#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the
 * beginning of a linked list
 * @head: first node in the list
 * @n: value for the new node
 *
 * Return: the new node or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
