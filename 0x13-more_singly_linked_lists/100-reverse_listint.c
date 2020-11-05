#include "lists.h"

/**
 * _listint_len - returns the size of a list
 *
 * @h: header of the singly linked list
 *
 * Return: number of nodes
 */

size_t _listint_len(const listint_t *h)
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
 * reverse_listint - reverses a list
 *
 * @head: header of the singly linked list
 *
 * Return: head of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current (void);

	return (*head);
}
