#include "lists.h"

/**
 * pop_listint - pops the head of the list and returns its value
 *
 * @head: header of the singly linked list
 *
 * Return: popped head
 */

int pop_listint(listint_t **head)
{
	listint_t *aux;
	int data;

	if ((*head) == NULL)
	{
		return (0);
	}

	aux = *head;
	data = aux->n;
	*head = (*head)->next;

	free(aux);

	return (data);

}
