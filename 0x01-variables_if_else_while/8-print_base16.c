#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - main function
 *
 * Description: prints if a number is positive, negative or zero
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;

	while (i < 16)
	{
		if (i >= 10)
		{
			putchar((i - 10) + 'a');
		} else
		{
			putchar(i + '0');
		}
		i++;
	}
	putchar('\n');
	/* your code goes there */
	return (0);
}