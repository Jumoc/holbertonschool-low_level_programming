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

	int operacion = 0;

	if (argc == 3)
	{
		operacion = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", operacion);
	} else
	{
		printf("Error\n");
		return (0);
	}

	return (0);
}
