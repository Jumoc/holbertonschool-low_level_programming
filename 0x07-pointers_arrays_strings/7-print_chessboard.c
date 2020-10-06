#include "holberton.h"

/**
 * *_strstr - locates a character in a string
 *
 * @haystack: string to look into
 * @needle: character to look for
 *
 * Return: counter of ocurrences
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(*(*(a + i) + j));
		}
		_putchar('\n');
	}
}
