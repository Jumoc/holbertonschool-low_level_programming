#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - allocates memory for an array, using malloc and fills it
 *
 * @min: where it starts
 * @max: where it ends
 *
 * Return: allocated pointer
 */

int *array_range(int min, int max)
{
	int *ptr;
	int size, i;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min;

	ptr = malloc(size * sizeof(int) + 1);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < size + 1; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);

}
