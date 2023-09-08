#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	printf("{");
	for (i = 0; ht && ht->array[i]; i++)
	{
		node = ht->array[i];
		while (node)
		{
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			if (node)
				printf(", ");
		}
	}
	printf("}\n");
}
