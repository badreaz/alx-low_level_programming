#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to pointer to listint_t.
 *
 * Return: th first n, if empty 0.
 */
int pop_listint(listint_t **head)
{
	int ret;

	if (*head == NULL)
		return (0);
	ret = (*head)->n;
	*head = (*head)->next;
	return (ret);
}
