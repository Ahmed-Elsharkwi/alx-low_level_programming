#include "hash_tables.h"
/**
 * hash_table_print - print all the elements of the hash table
 * @ht: is a pointer of the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *pointer;
	unsigned long int i, result = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		pointer = ht->array[i];
		while (pointer != NULL)
		{
			result++;
			if (result != 1)
				printf(", ");
			printf("'%s': '%s'", pointer->key, pointer->value);
			pointer = pointer->next;
		}
	}
	printf("}\n");
}
