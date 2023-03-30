#include "lists.h"

/**
 * print_list - prints all elements of list_t list.
 * @h: pointer to list_t.
 *
 * Return: number of elements.
 */
size_t print_list(const list_t *h)
{
	size_t c;

	for (c = 0; h; c++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (c);
}
