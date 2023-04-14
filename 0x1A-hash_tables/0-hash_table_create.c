#include "hash_tables.h"

/**
 * hash_table_create - This fucntion creates a hash table
 * @size: Incoming argument for size of hash table
 *
 * Return: A pointer to the created hash table, or NULL if error encountered.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hash_tab = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (hash_tab == NULL)
		return (NULL);

	hash_tab->size = size;
	hash_tab->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_tab->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hash_tab->array[i] = NULL;

	return (hash_tab);
}
