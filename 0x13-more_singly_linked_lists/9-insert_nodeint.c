#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to pointer to listint_t.
 * @idx: position.
 * @n: number to add.
 *
 * Return: pointer to new node, or NULL if failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *ptr;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	ptr = *head;
	for (i = 1; i < idx && ptr->next; i++)
		ptr = ptr->next;
	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	else if (i != idx)
		return (NULL);

	new->n = n;
	new->next = ptr->next;
	ptr->next = new;
	return (new);
}
