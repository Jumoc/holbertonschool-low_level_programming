#include "lists.h"

/**
 * print_list - prints the contents of a singly linked list
 *
 * @h: header of the singly linked list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int i = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);

		i++;
		current = current->next;
	}
	return (i);
}
