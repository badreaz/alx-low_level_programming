hash_tables.h:
	- project header file.

0-hash_tables_create.c:
	- function that creates a hash table.
	- Prototype: hash_table_t *hash_table_create(unsigned long int size);
		- where size is the size of the array
	- Returns a pointer to the newly created hash table

1-djb2.c:
	- hash function implementing the djb2 algorithm.
	- Prototype: unsigned long int hash_djb2(const unsigned char *str);

2-key_index.c:
	- function that gives you the index of a key.
	- Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size);

3-hash_tables.c:
	-  function that adds an element to the hash table.
	- Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value);

4-hash_table_get.c:
	- function that retrieves a value associated with a key.
	- Prototype: char *hash_table_get(const hash_table_t *ht, const char *key);

5-hash_table_print.c:
	- function that prints a hash table.
	- Prototype: void hash_table_print(const hash_table_t *ht);

6-hash_table_delete.c:
	- function that deletes a hash table.
	- Prototype: void hash_table_delete(hash_table_t *ht);

100-sorted_hash_table.c:
	- shash_table_t *shash_table_create(unsigned long int size);
	- int shash_table_set(shash_table_t *ht, const char *key, const char *value);
	- char *shash_table_get(const shash_table_t *ht, const char *key);
	- void shash_table_print(const shash_table_t *ht);
	- void shash_table_print_rev(const shash_table_t *ht);
	- void shash_table_delete(shash_table_t *ht);
