#include "lists.h"

/**
 * add_nodeint_end - adds an int node to the end of a list
 *
 * @head: header of the singly linked list
 * @n: data of the node
 *
 * Return: added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = NULL, *current = NULL;

	newNode = malloc(sizeof(listint_t));
	current = *head;

	if (!newNode)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (!(*head))
	{
		*head = newNode;
		return (newNode);
	}

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = newNode;

	return (newNode);

}
