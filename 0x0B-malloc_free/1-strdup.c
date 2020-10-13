#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sizePtr - returns the size of a pointer array
 *
 * @str: pointer array to be counter
 *
 * Return: size of the array
 */

int sizePtr(char *str)
{
	int size = 0;

	if (str != NULL)
	{
		for (size = 0; str[size] != '\0'; size++)
			size++;
	}
	return (size);
}

/**
 * _strdup - creates an array of size
 *
 * @str: size of the array
 *
 * Return: pointer to the new array
 */

char *_strdup(char *str)
{
	char *ptr;
	int size, i;

	if (str == NULL)
		return (NULL);

	size = sizePtr(str);
	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];
	return (ptr);
}
