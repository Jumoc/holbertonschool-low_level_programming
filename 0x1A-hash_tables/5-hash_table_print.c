#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value assosiated with a key
 *
 * @ht: header of the singly linked list
 * @key: data of the node
 *
 * Return: value
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, nodes = 0;
	hash_node_t *current;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		if (current != NULL && nodes != 0)
			printf(", ");
		if (current)
		{
			printf("'%s': '%s'", current->key, current->value);
			nodes++;
			current = current->next;
			while (current)
			{
				printf(", ");
				printf("'%s': '%s'", current->key, current->value);
				current = current->next;
			}
		}
	}
	printf("}\n");
}
