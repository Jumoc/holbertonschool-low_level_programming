#include "lists.h"

/**
 * listint_len - returns the size of a list
 *
 * @h: header of the singly linked list
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
