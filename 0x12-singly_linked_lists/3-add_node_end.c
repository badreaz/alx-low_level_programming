#include "lists.h"
#include <string.h>

int _strlen(const char *s);
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to pointer to the start of node.
 * @str: string to add.
 *
 * Return: the address of the new element, or NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *ptr;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	ptr = (*head)->next;
	if (ptr == NULL)
	{
		(*head)->next = new;
		return (new);
	}
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new;
	return (new);
}

/**
 * _strlen - return the length of a string.
 * @s: pointer to char.
 *
 * Return: the length of string.
 */
int _strlen(const char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
