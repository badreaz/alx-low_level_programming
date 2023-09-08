#include "hash_tables.h"

/**
 * shash_table_create - create sorted hash table.
 * @size: sorted hash table.
 *
 * Return: pointer to the table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_shash;
	unsigned long int i;

	new_shash = malloc(sizeof(shash_table_t));
	if (new_shash == NULL)
		return (NULL);
	new_shash->size = size;
	new_shash->array = malloc(sizeof(shash_node_t *) * size);
	if (new_shash->array == NULL)
	{
		free(new_shash);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new_shash->array[i] = NULL;
	new_shash->shead = NULL;
	new_shash->stail = NULL;
	return (new_shash);
}


/**
 * check_key - check if a key already exists.
 * @node: linked list.
 * @key: key.
 * @value: value.
 *
 * Return: if if key exists
 */
int check_key(shash_node_t *node, const char *key, const char *value)
{
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	return (0);
}


/**
 * shash_table_set - set a new key/value in sorted hash table.
 * @ht: hash table.
 * @key: key.
 * @value: value.
 *
 * Return: 1 if succeeded, otherwise 0.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *nodes = ht->shead;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (check_key(nodes, key, value))
		return (1);
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	new_node->sprev = new_node->snext = NULL;
	if (ht->shead == NULL)
		ht->shead = ht->stail = new_node;
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		nodes = ht->shead;
		while (nodes->snext && strcmp(nodes->snext->key, key) < 0)
			nodes = nodes->snext;
		new_node->sprev = nodes;
		new_node->snext = nodes->snext;
		if (nodes->snext == NULL)
			ht->stail = new_node;
		else
			nodes->snext->sprev = new_node;
		nodes->snext = new_node;
	}
	return (1);
}


/**
 * shash_table_get - get a value of a key.
 * @ht: hash_table.
 * @key: key.
 *
 * Return: value, otherwise NULL.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);
	node = ht->shead;
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->snext;
	}
	return (NULL);
}


/**
 * shash_table_print - print sorteh hash table.
 * @ht: hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	int first = 0;

	if (ht == NULL)
		return;

	node = ht->shead;
	printf("{");
	while (node)
	{
		if (first)
			printf(", ");
		first = 1;
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
	}
	printf("}\n");
}


/**
 * shash_table_print_rev - print sorted hash table in reverse.
 * @ht: hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	int first = 0;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");
	while (node)
	{
		if (first)
			printf(", ");
		first = 1;
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
	}
	printf("}\n");
}


/**
 * shash_table_delete - delete sorted hash table.
 * @ht: hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *next;

	if (ht == NULL)
		return;
	node = ht->shead;
	while (node)
	{
		next = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = next;
	}
	free(ht->array);
	free(ht);
}
