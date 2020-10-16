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
		free(ptr);
		return (NULL);
	}
	size = max - min;

	ptr = malloc(size);

	if (ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		ptr[i - min] = i;

	return (ptr);

}
