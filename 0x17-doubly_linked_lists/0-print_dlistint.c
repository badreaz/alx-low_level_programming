#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list.
 * @h: pointer to the head of double linked list.
 *
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
