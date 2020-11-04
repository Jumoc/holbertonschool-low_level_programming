#include "lists.h"

/**
 * get_nodeint_at_index - pops the head of the list and returns its value
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
	listint_t *current = *head;
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	size = listint_len(*head);

	if (idx > size)
		return (NULL);

	newNode->n = n;

	while (i < (idx - 1))
	{
		current = current->next;
		i++;
	}

	newNode->next = current->next;
	current->next = newNode;

	return (newNode);
}
