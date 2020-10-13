#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * @argc: amount of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int arr[5] = {25, 10, 5, 2, 1};
	int i = 0, sum = 0, count = 0, cents;

	if (argc == 2)
	{
		cents = atoi(argv[1]);
		if (cents < 0)
		{
			printf("0\n");
			return (0);
		}
		while (i < 5)
		{
			if ((arr[i] + sum) <= cents)
			{
				sum += arr[i];
				count++;
			} else
			{
				i++;
			}
		}
	} else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);

	return (0);
}
