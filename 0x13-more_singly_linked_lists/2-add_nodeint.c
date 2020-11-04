#include "lists.h"

/**
 * add_nodeint - adds an int node to a list
 *
 * @head: header of the singly linked list
 * @n: data of the node
 *
 * Return: added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = (*head);
	*head = newNode;

	return (*head);

}
