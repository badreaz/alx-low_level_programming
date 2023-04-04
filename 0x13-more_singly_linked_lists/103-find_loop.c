#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to listint_t.
 *
 * Return: pointer to loop start, or NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	slow = head;
	fast = head;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = head;
			break;
		}
	}
	if (slow != head)
		return (NULL);
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
		if (slow == fast)
			return (slow);
	}
	return (NULL);
}
