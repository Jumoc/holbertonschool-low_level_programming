#include "hash_tables.h"

/**
 * hash_djb2 - creates a hash table of a given size
 *
 * @str: size of the hash table
 * Return: returns the hashtable
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
