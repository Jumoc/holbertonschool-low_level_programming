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
	char i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i != '9' || j != '9')
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	/* your code goes there */
	return (0);
}
