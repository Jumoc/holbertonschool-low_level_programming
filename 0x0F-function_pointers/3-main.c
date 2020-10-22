#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - operates two numbers
 *
 * @argv: first numbers
 * @argc: second number
 *
 * Return: 0.
 */
int main(int argv, char **argc)
{
	int (*operation)(int, int);
	int a, b, result;

	if (argv != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argc[1]);
	b = atoi(argc[3]);

	operation = get_op_func(argc[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argc[2][0] == '/' || argc[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = operation(a, b);
	printf("%d\n", result);
	return (0);
}
