#include "holberton.h"

/**
 * print_triangle - prints a diagonal line
 *
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j, spaces;

	spaces = size;

	if (!(size <= 0))
	{

		for (i = 1; i <= size; i++)
		{
			spaces = spaces - 1;
			for (j = 1; j <= size; j++)
			{
				if (j <= spaces)
				{
					_putchar(' ');
				} else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
