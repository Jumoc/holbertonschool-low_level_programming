#include "lists.h"

/**
 * sum_dlistint - counts the number of nodes
 * @head: head of the list
 * Return: sum of nodes
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
