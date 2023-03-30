#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to list_t.
 *
 * Return: number of elements.
 */
size_t list_len(const list_t *h)
{
	int c;
	list_t *ptr = h->next;

	if (h == NULL)
		return (0);
	for (c = 1; ptr; c++)
		ptr = ptr->next;
	return (c);
}
