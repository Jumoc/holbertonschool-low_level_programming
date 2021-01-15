#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value assosiated with a key
 *
 * @ht: header of the singly linked list
 * @key: data of the node
 *
 * Return: value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *node, *current;

	if (!ht || !key)
		return (NULL);

	idx = key_index((unsigned char *) key, ht->size);
	node = ht->array[idx];

	if (!node)
		return (NULL);

	if (strcmp(node->key, key) == 0)
		return (node->value);

	current = node->next;
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
