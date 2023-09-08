#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int first = 0;

	if (ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (first)
				printf(", ");
			node = ht->array[i];
			while (node)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node)
					printf(", ");
			}
			first = 1;
		}
	}
	printf("}\n");
}
