#include "lists.h"

/**
 * dlistint_len - counts the number of nodes
 * @h: head
 * Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *current;

	if (!h)
		return (0);

	current = h;

	while (current)
	{
		size++;
		current = current->next;
	}

	return (size);
}
