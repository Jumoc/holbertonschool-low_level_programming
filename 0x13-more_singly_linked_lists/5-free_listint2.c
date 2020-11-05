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
 * free_listint2 - frees a singly linked list and sets the head to null
 *
 * @head: header of the singly linked list
 *
 * Return: number of nodes
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	current = *head;
	while(*head && head)
	{
		(*head) = (*head)->next;
		free(current);
		current = *head;
	}
	*head = NULL;
}
