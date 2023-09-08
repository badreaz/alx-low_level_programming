#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			while (node != NULL)
			{
				node = ht->array[i];
				ht->array[i] = node->next;
				free(node->key);
				free(node->value);
				free(node);
			}
		}
	}
	free(ht->array);
	free(ht);
}
