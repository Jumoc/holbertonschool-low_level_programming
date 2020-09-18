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
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastd = (n % 10);

	printf("Last digit of %d is %d ", n, lastd);

	if (lastd > 5)
	{
		printf("and is greater than 5\n");
	} else if (lastd == 0)
	{
		printf("and is 0");
	} else if (lastd < 6 && lastd != 0)
	{
		printf("and is less than 6 and not 0");
	}

	/* your code goes there */
	return (0);
}
