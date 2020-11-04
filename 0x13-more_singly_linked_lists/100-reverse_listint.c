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
	listint_t *current;
	listint_t *aux;

	if ((*head) == NULL)
	{
		return (NULL);
	}

	if (_listint_len(*head) == 1)
	{
		return (*head);
	}

	current = (*head)->next;
	aux = current->next;

	(*head)->next = NULL;

	while (aux != NULL)
	{
		current->next = (*head);
		(*head) = current;
		current = aux;
		aux = aux->next;
	}

	current->next = (*head);
	(*head) = current;

	return (*head);

}
