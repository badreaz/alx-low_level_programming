#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	printf("{");
	for (i = 0; ht && ht->array[i]; i++)
	{
		if (i != 0)
			printf(", ");
		printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
	}
	printf("}\n");
}
