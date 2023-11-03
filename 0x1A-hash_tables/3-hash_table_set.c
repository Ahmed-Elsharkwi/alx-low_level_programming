#include "hash_tables.h"
hash_node_t *add_node(const char *key, const char *value);
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: is a pointer to hash table
 * @key: is a string
 * @value: is a string
 * Return: 1 if the function success 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *new_node = NULL;

	if (key == NULL)
		return (0);
	index = key_index((unsigned char *) key, ht->size);
	if ((ht->array[index] != NULL) && (strcmp(ht->array[index]->key, key) == 0))
	{
		free(ht->array[index]->value);
		ht->array[index]->value = strdup(value);
		return (1);
	}
	new_node = add_node(key, value);
	if (new_node == NULL)
		return (0);
	if (ht->array[index] == NULL)
		new_node->next = NULL;
	else if (ht->array[index] != NULL)
		new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
/**
 * add_node - add a new node
 * @key: is a string
 * @value: is a string
 * Return: the address of the new node
 */
hash_node_t *add_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_node->key = malloc(strlen(key) + 1);
	if (new_node->key == NULL)
		return (NULL);
	strcpy(new_node->key, key);
	new_node->value = strdup(value);
	return (new_node);
}
