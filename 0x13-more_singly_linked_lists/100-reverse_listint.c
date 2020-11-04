#include "lists.h"

/**
 * reverse_listint - reverses a list
 *
 * @head: header of the singly linked list
 *
 * Return: head of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	if ((*head) == NULL)
	{
		return (NULL);
	}

	if (listint_len(*head) == 1)
	{
		return (*head);
	}

	listint_t *current = (*head)->next;
	listint_t *aux = current->next;

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
