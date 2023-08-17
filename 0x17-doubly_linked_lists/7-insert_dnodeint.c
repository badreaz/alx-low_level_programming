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
	int i;
	dlistint_t *new, *ptr = *h;

	for (i = 0; ptr; i++)
	{
		if (i == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return NULL;
			new->n = n;
			new->prev = ptr;
			new->next = ptr->next;
			ptr->next = new;
			return (new);
		}
		ptr = ptr->next;
	}
	return NULL;
}
