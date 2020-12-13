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

/**
 * get_dnodeint_at_index - gets a node in a certain index
 * @index: index to get
 * @head: head of the list
 * Return: node at index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	if (!head || (index > (dlistint_len(head) - 1)))
		return (NULL);

	current = head;

	while (i <= index)
	{
		current = current->next;
		i++;
	}
	return (current);
}
