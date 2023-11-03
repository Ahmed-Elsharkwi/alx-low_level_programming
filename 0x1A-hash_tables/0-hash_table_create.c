#include "hash_tables.h"
/**
 * hash_table_create - creat a hash table
 * @size: is a long int and size of the array
 * Return: a pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t));
	if (table->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
