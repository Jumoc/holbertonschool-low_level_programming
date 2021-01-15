#include "hash_tables.h"

/**
 * hash_table_delete - prints a hashtable
 *
 * @ht: header of the singly linked list
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];

		while (ht->array[i])
		{
			(ht->array[i]) = (ht->array[i])->next;
			free(current->key);
			free(current->value);
			free(current);
			current = ht->array[i];
		}
		ht->array[i] = NULL;
	}
	free(ht->array);
	free(ht);
}
