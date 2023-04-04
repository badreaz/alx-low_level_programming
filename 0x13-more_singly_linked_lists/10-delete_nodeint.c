#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a listint_t linked list.
 * @head: pointer to pointer to listint_t.
 * @index: node to be deleted.
 *
 * Return: 1 if succeeded, otherwise -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr, *del;

	if (*head == NULL)
		return (-1);
	ptr = *head;
	for (i = 1; i < index; i++)
	{
		if (ptr->next == NULL)
			return (-1);
		ptr = ptr->next;
	}
	if (index == 0)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
		return (1);
	}
	del = ptr->next;
	ptr->next  = ptr->next->next;
	free(del);
	return (1);
}
