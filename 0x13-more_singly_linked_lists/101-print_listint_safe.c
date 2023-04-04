#include "lists.h"
#include <stdlib.h>

/**
 * new_list - recreate a list of listint_t values.
 * @values: pointer to pointer to listint_t.
 * @new: new value to add.
 * @len: number of nodes.
 *
 * Return: pointer to pointer to listint_t.
 */
const listint_t **new_list(const listint_t **values,
const listint_t *new, int len)
{
	const listint_t **list;
	int i;

	list = malloc(len * sizeof(new));
	if (list == NULL)
		exit(98);
	for (i = 0; i < len - 1; i++)
		list[i] = values[i];
	list[i] = new;
	free(values);
	return (list);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to listint_t.
 *
 * Return: length of list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t **values;
	size_t i, num = 0;

	values = NULL;
	while (head)
	{
		for (i = 0; i < num; i++)
		{
			if (head == values[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(values);
				return (num);
			}
		}
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		values = new_list(values, head, num);
		head = head->next;
	}
	free(values);
	return (num);
}
