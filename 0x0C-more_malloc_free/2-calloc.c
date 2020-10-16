#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: size to allocate
 * @size: size of the type to be allocated
 *
 * Return: allocated pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;

	if (nmemb == 0 || size == 0)
	return (NULL);

	ptr = malloc((nmemb * size));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		*(int *)ptr = 0;
	}

	return (ptr);
}
