#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

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

	while (str[size] != '\0')
	{
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
	{
		return (NULL);
	}

	size = sizePtr(str);
	ptr = malloc(size * sizeof(char) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= size; i++)
		ptr[i] = str[i];
	return (ptr);
}
