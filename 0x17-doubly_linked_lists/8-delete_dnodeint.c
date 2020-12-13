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
 * delete_dnodeint_at_index - deletes a node in a specific index
 * @index: index
 * @head: head of the list
 * Return: 1 if succeed, 0 otherwise
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;

	if (!*head || (index > (dlistint_len(*head) - 1)))
		return (-1);

	current = *head;

	if (index == 0)
	{
		if (current->next)
		{
			current->next->prev = NULL;
			*head = (*head)->next;
			free(current);
		} else
		{
			free(*head);
			*head = NULL;
		}
		return (1);
	}
	while (count < index)
	{
		current = current->next;
		count++;
	}
	if (current->next)
		current->next->prev = current->prev;
	current->prev->next = current->next;
	free(current);

	return (1);
}
