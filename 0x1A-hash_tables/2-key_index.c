#include "hash_tables.h"
/**
 * key_index - calculate the index which the data
 * will be stored in
 * @key: is a pointer
 * @size: is the size of array in the hash table
 * Return: index which the data will be stored in
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_1;
	unsigned long int index;

	key_1 = hash_djb2(key);
	index = key_1 % size;
	return (index);
}
