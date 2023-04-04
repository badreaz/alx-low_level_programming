#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: pointer to pointer to listint_t.
 *
 * Return: pointer to the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *new, *old;

	old = NULL;
	if (!(*head)->next)
		return (*head);
	while (*head)
	{
		new = (*head)->next;
		(*head)->next = old;
		old = *head;
		*head = new;
	}
	*head = old;
	return (*head);
}
