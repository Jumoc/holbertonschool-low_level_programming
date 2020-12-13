#include "lists.h"

/**
 * add_dnodeint - adds a node on the head
 * @n: value of new node
 * @head: head of the list
 * Return: new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	newNode->next = *head;
	*head = newNode;
	return (*head);
}
