#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to pointer to listint_t.
 */
void free_listint2(listint_t **head)
{
	listint_t *store, *ptr;

	ptr = *head;
	while (ptr)
	{
		store = ptr->next;
		free(ptr);
		ptr = store;
	}
	*head = NULL;
}
