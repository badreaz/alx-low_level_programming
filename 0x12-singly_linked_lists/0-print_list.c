#include "lists.h"

/**
 * print_list - prints all elements of list_t list.
 * @h: pointer to list_t.
 *
 * Return: number of elements.
 */
size_t print_list(const list_t *h)
{
	int c;
	list_t *ptr = h->next;

	for (c = 0; ptr && h; c++)
	{
		if (c == 0)
		{
			if (h->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			if (ptr->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%d] %s\n", ptr->len, ptr->str);
			ptr = ptr->next;
		}
	}
	return (c);
}
