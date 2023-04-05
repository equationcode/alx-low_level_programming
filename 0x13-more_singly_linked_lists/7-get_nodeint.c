#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the node
 * at a certain index in a linked list
 * @head: the first node of the linked list
 * @index: the index of the node
 *
 * Return: return the node or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int h = 0;
	listint_t *temp = head;

	while (temp && h < index)
	{
		temp = temp->next;
		h++;
	}

	return (temp ? temp : NULL);
}
