#include "lists.h"

/**
 * free_list -  frees a list_t list.
 * @head: pointeer to list_t.
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
