#include "lists.h"
#include <string.h>

/**
 * _strlen_const - function that obtain the length of buffer
 * @buffer: pointer contain digits
 * Return: size of buffer
 */
int _strlen_const(const char *buffer)
{
	int size = 0;

	while (buffer[size] != '\0')
	{
		size++;
	}
	return (size);
}

/**
 * add_node_end - adds a node to a list
 *
 * @head: header of the singly linked list
 * @str: string to add to the node
 *
 * Return: the head
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *newNode;
	list_t *current;

	current = *head;

	newNode = malloc(sizeof(list_t));

	if (!newNode || !str)
	{
		free(newNode);
		return (NULL);
	}

	if (!(*head))
	{
		newNode->str = strdup(str);
		newNode->len = _strlen_const(str);
		newNode->next = NULL;
		(*head) = newNode;
	} else
	{
		newNode->str = strdup(str);
		newNode->len = _strlen_const(str);
		newNode->next = NULL;

		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = newNode;
	}
	return ((*head));
}
