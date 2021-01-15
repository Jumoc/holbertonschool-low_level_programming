#include "hash_tables.h"

/**
 * create_node - adds an int node to a list
 *
 * @key: data of the node
 * @value: data of the node
 *
 * Return: new node
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *newNode;

	newNode = malloc(sizeof(hash_node_t));

	if (!newNode)
		return (NULL);

    newNode->key = malloc(strlen(key) + 1 * sizeof(char));
	newNode->value = malloc(strlen(value) + 1 * sizeof(char));

	strcpy(newNode->key, key);
	strcpy(newNode->value, value);
    newNode->next = NULL;

	return (newNode);
}

/**
 * add_node - adds an int node to a list
 *
 * @node: header of the singly linked list
 *
 * Return: added node
 */

hash_node_t *add_node(hash_node_t **head, hash_node_t *node)
{
	*head = node;

	return (*head);
}

/**
 * hash_table_set - adds pairs to the passed hashmap
 *
 * @ht: size of the hash table
 * @key: size of the hash table
 * @value: size of the hash table
 * Return: returns the hashtable
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int idx;
    hash_node_t *node = NULL;

    if (!key || !ht || strcmp(value, "") == 0 || strcmp(key, "") == 0)
        return (0);

    idx = key_index((unsigned char *) key, ht->size);
    node = create_node(key, value);
    if (!node)
        return (0);

    if (!(ht->array[idx]))
        ht->array[idx] = node;
    else
        add_node(&(ht->array[idx]), node);

    return (1);
}
