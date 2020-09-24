#include "holberton.h"

/**
 * times_table - prints the multiplication tables
 */

void times_table(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j < 10; j++)
		{
			int operation = (i * j);

			if (operation < 10)
			{
				_putchar(operation + '0');
				if (j != 9)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				}
			} else
			{
				_putchar((operation / 10) + '0');
				_putchar((operation % 10) + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}

}
