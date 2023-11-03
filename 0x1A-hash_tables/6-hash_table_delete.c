#include "hash_tables.h"
/**
 * hash_table_delete - free the hash table
 * @ht: is a pointer to the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *pointer, *pointer_1;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		pointer = ht->array[i];
		while (pointer != NULL)
		{
			pointer_1 = pointer->next;
			free(pointer->key);
			free(pointer->value);
			free(pointer);
			pointer = pointer_1;
		}
	}
	free(ht->array);
	free(ht);
}
