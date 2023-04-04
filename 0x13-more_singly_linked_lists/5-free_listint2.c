#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to pointer to listint_t.
 */
void free_listint2(listint_t **head)
{
	if (*head)
	{
		free_listint2(&((*head)->next));
		free(*head);
		*head = NULL;
		head = NULL;
	}
}
