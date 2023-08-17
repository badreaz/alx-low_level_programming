#include "lists.h"

/**
 * free_dlistint - frees a dlistint_T list.
 * @head: pointer to the head of list.
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}
