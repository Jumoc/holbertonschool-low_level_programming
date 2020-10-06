#include "holberton.h"
#include <stdio.h>
/**
 * print_chessboard - prints a chessboard
 *
 * @a: matrix of chars
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0, j, suma1 = 0, suma2 = 0;

	j = size - 1;

	while (i < size)
	{
		suma1 += a[i];
		suma2 += a[i + j];
		i++;
		j -= 2;
		a += size;
	}

	printf("%d, %d", suma1, suma2);
	printf("\n");
}
