#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to listint_t.
 * @n: number to add.
 *
 * Return: pointer to new element, NULL if failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *ptr;
	int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	ptr = *head;
	for (i = 0; ptr->next; i++)
		ptr = ptr->next;
	ptr->next = new;
	return (new);
}
