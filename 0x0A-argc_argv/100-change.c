#include <stdio.h>
#include <stdlib.h>

/**
 * checkDigit - checks if a passed argument are numbers
 *
 * @s: amount of arguments
 *
 * Return: 0 on success
 */
int checkDigit(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (!(s[i] <= '9' && s[i] >= '0') && s[i] != '-')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

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
		}
		while (i < 5)
		{
			if (sum == cents)
			{
				printf("%d\n", count);
				return (0);
			}
			if (sum < cents && (arr[i] + sum) <= cents)
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
	return (0);
}
