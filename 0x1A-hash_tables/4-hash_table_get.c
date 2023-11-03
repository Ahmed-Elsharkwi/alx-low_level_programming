#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: is a pointer to the hash table
 * @key: is a key which we are gonna look with
 * Return: value if it exist or null if not
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *pointer;

	if (key == NULL || *key = '\0')
		return (NULL);
	index = key_index((unsigned char *) key, ht->size);
	pointer = ht->array[index];
	while (pointer != NULL)
	{
		if (strcmp(pointer->key, key) == 0)
			return (pointer->value);
		pointer = pointer->next;
	}
	return (NULL);
}
