#include "lists.h"

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
	listint_t *ptr;

	ptr = *head;
	for (i = 1; i < index; i++)
	{
		if (ptr == NULL)
			return (-1);
		ptr = ptr->next;
	}
	if (index == 0)
	{
		*head = ptr->next;
		return (1);
	}
	ptr->next = ptr->next->next;
	return (1);
}
