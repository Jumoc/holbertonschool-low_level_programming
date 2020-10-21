#include "function_pointers.h"

/**
 * array_iterator - prints all values from an array
 *
 * @array: array of numbers
 * @size: size of the array above
 * @action: function that prints a given number
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}

}
