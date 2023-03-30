#include "lists.h"

int _strlen(char *s);
char *_strdup(const char *str);

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to pointer to list_t.
 * @str: string to add.
 *
 * Return: the address of new element, otherwise NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = _strdup(str);
	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;
	return (new);
}

/**
 * _strdup - copy a string to allocated memory.
 * @str: pointer to string.
 *
 * Return: the pointer to allocated memory, otherwise NULL.
 */
char *_strdup(const char *str)
{
	char *p;
	int size = 0;

	if (str == 0)
		return (0);
	while (str[size] != '\0')
		size++;
	size++;
	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	size = 0;
	while (str[size] != '\0')
	{
		p[size] = str[size];
		size++;
	}
	p[size] = '\0';
	return (p);
}

/**
 * _strlen - return the length of a string.
 * @s: pointer to char.
 *
 * Return: the length of string.
 */
int _strlen(char *s)
{
	char *p = s;
	int count = 0;

	while (*p != '\0')
	{
		count++;
		p++;
	}
	return (count);
}
