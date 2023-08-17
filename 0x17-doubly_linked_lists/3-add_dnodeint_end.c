#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a
 *  dlistint_t list.
 * @head: pointer to the head of list.
 * @n: node value.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = *head, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	while (ptr && ptr->next)
		ptr = ptr->next;
	new->n = n;
	new->prev = ptr;
	new->next = NULL;
	if (ptr)
		ptr->next = new;
	return (new);
}
