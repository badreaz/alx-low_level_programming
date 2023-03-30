#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to list_t.
 *
 * Return: number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t c;

	for (c = 0; h; c++)
		h = h->next;
	return (c);
}
