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

/**
 * get_nodeint_at_index - pops the head of the list and returns its value
 *
 * @head: header of the singly linked list
 * @index: nth node to get
 *
 * Return: popped head
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int size, i = 0;
	listint_t *current = head;

	size = listint_len(head);

	if (index > (size - 1))
		return (NULL);

	while (i < index)
	{
		current = current->next;
		i++;
	}

	return (current);
}
