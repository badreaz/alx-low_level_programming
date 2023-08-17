#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 *  dlistint_t linked list.
 * @head: pointer to the head of list.
 * @index: node position.
 *
 * Return: 1 in success, otherwise -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *ptr = *head;

	if (*head == NULL)
		return (-1);
	for (i = 0; ptr; i++)
	{
		if (i == index)
		{
			if (ptr->prev && ptr->next)
			{
				ptr->prev->next = ptr->next;
				ptr->next->prev = ptr->prev;
			}
			else if (ptr->prev)
				ptr->prev->next = NULL;
			else
			{
				*head = ptr->next;
				ptr->next->prev = NULL;
			}
			free(ptr);
			return (1);
		}
		ptr = ptr->next;
	}
	return (-1);
}
