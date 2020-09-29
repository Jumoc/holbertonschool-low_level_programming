#include "holberton.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: variable to be swapped with b
 * @b: variable to be swapped with a
 */

void swap_int(int *a, int *b)
{

	int ra = *a;

	*a = *b;
	*b = ra;

}
