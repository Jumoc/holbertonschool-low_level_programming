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
	char abcLower[26] = "abcdefghijklmnopqrstuvwxyz";
	char abcUpper[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	i = 0;
	while (i < 26)
	{
		putchar(abcLower[i]);
		i++;
	}

	i = 0;
	while (i < 26)
	{
		putchar(abcUpper[i]);
		i++;
	}

	putchar('\n');
	/* your code goes there */
	return (0);
}
