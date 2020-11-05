#include "lists.h"

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

	while(*head != NULL)
	{
		(*head) = (*head)->next;
		free(current);
		current = *head;
	}
}
