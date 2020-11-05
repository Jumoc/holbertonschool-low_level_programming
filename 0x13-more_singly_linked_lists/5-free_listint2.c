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
 * free_listint - frees a singly linked list
 *
 * @head: header of the singly linked list
 *
 * Return: number of nodes
 */

void free_listint(listint_t *head)
{
	listint_t *current;
	int size, i, j;

	size = listint_len(head);

	for (i = 0; i < size; i++)
	{
		current = head;
		for (j = 0; j < (size - i); j++)
			current = current->next;
		free(current);
	}
	free(head);
}

/**
 * free_listint2 - frees a singly linked list and sets the head to null
 *
 * @head: header of the singly linked list
 *
 * Return: number of nodes
 */
void free_listint2(listint_t **head)
{
	if (*head != NULL)
	{
		free_listint((*head));
		*head = NULL;
	}
}
