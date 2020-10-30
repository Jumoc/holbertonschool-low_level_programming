#include "lists.h"

/**
 * list_len - returns the size of a list
 *
 * @h: header of the singly linked list
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	int i = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
