#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given index
 *
 * @head: header of the singly linked list
 * @index: nth node to get
 *
 * Return: data of the deleted node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int size, i = 0;
	listint_t *current = *head;
	listint_t *aux;

	size = listint_len(*head);

	if (index > (size - 1) || !(*head))
		return (-1);

	if (index == 0)
	{
		aux = *head;
		(*head) = (*head)->next;
		free(aux);
		return (1);
	}

	while (i < (index - 1))
	{
		current = current->next;
		i++;
	}

	aux = current->next;
	current->next = current->next->next;
	free(aux);

	return (1);
}
