#include "lists.h"
#include <stdlib.h>

/**
 * newlist - recreate a list of listint_t values.
 * @values: pointer to pointer to listint_t.
 * @new: new value to add.
 * @len: number of nodes.
 *
 * Return: pointer to pointer to listint_t.
 */
listint_t **newlist(listint_t **values, listint_t *new, int len)
{
	listint_t **list;
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
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to pointer to listint_t.
 *
 * Return: size of list.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t **values;
	listint_t *ptr, *store;
	size_t i, num = 0;

	values = NULL;
	ptr = *h;
	while (ptr)
	{
		for (i = 0; i < num; i++)
		{
			if (ptr == values[i])
			{
				*h = NULL;
				free(values);
				return (num);
			}
		}
		num++;
		values = newlist(values, ptr, num);
		store = ptr->next;
		free(ptr);
		ptr = store;
	}
	free(values);
	*h = NULL;
	return (num);
}
