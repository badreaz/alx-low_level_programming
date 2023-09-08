#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table.
 * @key: key.
 *
 * Return: value associated with key, or NULL if couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, i;

	if (ht == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(key, ht->array[i]->key) == 0)
			return (ht->array[i]->value);
	}
	return (NULL);
}
