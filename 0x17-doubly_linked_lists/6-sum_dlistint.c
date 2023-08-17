#include "lists.h"

/**
 * sum_dlistint - sum all data(n) of a dlistint_t linked list.
 * @head: pointer to the head of list.
 *
 * Return: sum, 0 if empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int ret = 0;

	if (head)
	{
		ret = sum_dlistint(head->next);
		return (head->n + ret);
	}
	return 0;
}
