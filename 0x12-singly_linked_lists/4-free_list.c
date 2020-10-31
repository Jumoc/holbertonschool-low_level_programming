#include "lists.h"
#include <string.h>

/**
 * list_len - returns the size of a list
 *
 * @h: header of the singly linked list
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	int i = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}

/**
 * add_node_end - adds a node to a list
 *
 * @head: header of the singly linked list
 * @str: string to add to the node
 *
 * Return: the head
 */
void free_list(list_t *head)
{
        list_t *current = head;
        size_t size, i, j;

        size = list_len(head);

        for (i = 0; i < size; i++)
        {
                current = head;
                for (j = 0; j < (size - i); j++)
                {
                        current = current->next;
                }
                free(current);
        }
        free(head);
}
