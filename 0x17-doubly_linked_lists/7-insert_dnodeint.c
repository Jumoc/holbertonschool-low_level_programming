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
 * insert_dnodeint_at_index - adds a node in a specific index
 * @idx: index
 * @h: head of the list
 * @n: value of new node
 * Return: new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *newNode;
	unsigned int count = 0;

	if (idx > (dlistint_len(*h)))
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->next = NULL;
	newNode->prev = NULL;
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *h;
		(*h)->prev = newNode;
		*h = newNode;
		return (*h);
	}
	current = *h;
	while (count < (idx - 1))
	{
		current = current->next;
		count++;
	}
	newNode->next = current->next;
	if (newNode->next)
		newNode->next->prev = newNode;
	newNode->prev = current;
	current->next = newNode;

	return (newNode);
}
