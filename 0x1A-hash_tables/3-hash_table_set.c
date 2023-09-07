#include "hash_tables.h"

/**
 * hash_table_set - adds an elementto the hash table.
 * @ht: hash table.
 * @key: key.
 * @value: value.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index, i;

	if (ht == NULL || value == NULL)
		return (0);
	index = key_index(key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key->value) == 0)
		{
			free(hht->array[i]->value);
			ht->array[i]->value = strdup(value);
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
