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
	int (*operation) (int, int);
	int a, b, result;
	char *op;

	op = malloc(sizeof(char));

	if (argv != 4 || op == NULL)
	{
		free(op);
		printf("Error\n");
		exit(98);
	}

	a = atoi(argc[1]);
	op = argc[2];
	b = atoi(argc[3]);

	operation = get_op_func(op);

	if (operation == NULL)
	{
		free(op);
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' || *op == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = operation(a, b);
	printf("%d\n", result);
	return (0);
}
