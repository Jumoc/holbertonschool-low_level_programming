#include "lists.h"

/**
 * add_dnodeint_end - adds a node
 * @n: value of new node
 * @head: head of the list
 * Return: new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *current;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	current = *head;

	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}

	while (current->next)
	{
		current = current->next;
	}
	newNode->prev = current;
	current->next = newNode;
	return (newNode);
}
