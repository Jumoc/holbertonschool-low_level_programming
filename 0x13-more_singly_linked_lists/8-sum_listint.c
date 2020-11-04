#include "lists.h"

/**
 * sum_listint - returns the sum of the data a list
 *
 * @head: head of the singly linked list
 *
 * Return: sum of all the nodes
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
