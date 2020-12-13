#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: head
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{

	size_t size = 0;
	const dlistint_t *current;

	if (!h)
		return (0);

	current = h;

	while (current)
	{
		printf("%d\n", current->n);
		size++;
		current = current->next;
	}

	return (size);
}
