#include "lists.h"

/**
 * get_dnodeint_at_index - find the nth node
 * of a dlistint_t linked list.
 * @head: pointer to the head of list.
 * @index: index of the node.
 *
 * Return: pointer to the node, otherwise NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *h = head, *node = NULL;

	for (i = 0; h; i++)
	{
		if (i == index)
			node = h;
		h = h->next;
	}
	return (node);
}
