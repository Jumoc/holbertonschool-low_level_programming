#include "hash_tables.h"

/**
 * hash_djb2 - creates a hash table of a given size
 *
 * @str: size of the hash table
 * Return: returns the hashtable
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
