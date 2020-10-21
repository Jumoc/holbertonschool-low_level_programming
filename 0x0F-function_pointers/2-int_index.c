#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array of numbers
 * @size: size of the array above
 * @cmp: function that compares a given number
 *
 * Return: void.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
