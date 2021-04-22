#include "search_algos.h"

/**
 * print_array - prints an array given a start and an end
 * @array: array
 * @l: start of the array
 * @r: end of the array
 *
 * Return: void
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t i;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		printf("%d", array[i]);
		if (i < r)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in an array
 * @array: array
 * @size: size of the array
 * @value: value to search in the arraymj
 *
 * Return: returns the index if found -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r;
	int mid;

	if (!array)
		return (-1);

	r = size - 1;

	while (l <= r)
	{
		print_array(array, l, r);
		mid = (l + r) / 2;

		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			r =  mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}

