#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * @array: array
 * @size: size of the array
 * @value: value to search in the arraymj
 *
 * Return: returns the index if found -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
