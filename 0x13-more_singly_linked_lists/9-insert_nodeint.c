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

/**
 * _listint_len - returns the size of a list
 *
 * @h: header of the singly linked list
 *
 * Return: number of nodes
 */

size_t _listint_len(const listint_t *h)
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
 * insert_nodeint_at_index - pops the head of the list and returns its value
 *
 * @head: header of the singly linked list
 * @idx: nth node to get
 * @n: data of the new node
 *
 * Return: added node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t size, i = 0;
	listint_t *current;
	listint_t *newNode;

	current = *head;
	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	size = _listint_len(*head);
	if (idx > size)
		return (NULL);

	newNode->n = n;
	if ((*head) == NULL)
	{
		(*head) = newNode;
		newNode->next = NULL;
		return (newNode);
	}
	if (idx == 0)
	{
		newNode->next = *head;
		(*head) = newNode;
		return (*head);
	}
	while (i < (idx - 1))
	{
		current = current->next;
		i++;
	}
	newNode->next = current->next;
	current->next = newNode;
	return (newNode);
}
