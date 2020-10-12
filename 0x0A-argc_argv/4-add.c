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

	int operacion = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (*(argv[i] + j) != '\0')
		{
			if (!(*(argv[i] + j) <= '9' && *(argv[i] + j) >= '0'))
			{

				printf("Error\n");
				return (1);

			}
			j++;
		}

		operacion += atoi(argv[i]);

	}

	printf("%d\n", operacion);

	return (0);
}
