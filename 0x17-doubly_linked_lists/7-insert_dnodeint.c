#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the head of linked list.
 * @idx: insert position.
 * @n: node to insert.
 *
 * Return: addres of the new node, or NULL if failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *ptr = *h;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	while (ptr && ptr->prev)
		ptr = ptr->prev;
	for (i = 0; ptr; i++)
	{
		if (i == idx)
		{
			if (!ptr->next)
				return (add_dnodeint_end(h, n));
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->prev = ptr->prev;
			new->next = ptr;
			ptr->prev->next = new;
			return (new);
		}
		ptr = ptr->next;
	}
	return (NULL);
}
