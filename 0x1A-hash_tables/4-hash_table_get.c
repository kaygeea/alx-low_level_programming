#include "hash_tables.h"

/**
 * hash_table_get - This functions retrieves te value associated with a key.
 * @ht: incoming argument for hash table containing key:value pair in question.
 * @key: incoming argument for key, whose associated value is to be retrieved.
 *
 * Return: Value associated with key, or NULL if key is not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
