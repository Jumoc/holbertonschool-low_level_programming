#include "lists.h"

/**
 * print_listint - prints the contents of a singly linked list
 *
 * @h: header of the singly linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		i++;
		current = current->next;
	}
	return (i);
}
