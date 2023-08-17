#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list.
 * @head: pointer to the head of list.
 * @n: int to add.
 *
 * REturn: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr = *head, *new;

	while (ptr->next)
		ptr = ptr->next;
	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->prev = ptr;
	new->next = NULL;
	ptr->next = new;
	return (new);
}
