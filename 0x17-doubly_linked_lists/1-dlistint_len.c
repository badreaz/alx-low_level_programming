#include "lists.h"

/**
 * dlistint_len - count the number of elements in a linked list.
 * @h: pointer to the head of double linked list.
 *
 * Return: number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
