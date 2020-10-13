#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of size
 *
 * @size: size of the array
 * @c: char to initialize the array to
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}

	ptr = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{

		ptr[i] = c;

	}
	return (ptr);
}
