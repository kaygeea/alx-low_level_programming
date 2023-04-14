#include "hash_tables.h"

/**
 * key_index - This function returns the index of a key
 * @key: Incoming argument for key to be mapped.
 * @size: Incoming argument for size of hash table
 *
 * Return: the index at which key is to be stored in memory.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_val;

	if (key != NULL)
	{
		hash_val = hash_djb2(key) % size;
	}
	return (hash_val);
}
