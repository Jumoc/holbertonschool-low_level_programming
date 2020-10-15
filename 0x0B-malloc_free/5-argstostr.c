#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 *
 * @ac: amount of args
 * @av: args
 *
 * Return: pointer to the new 2d array
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, aux = 0, count = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			count++;
			j++;
		}
	}

	ptr = malloc((count + ac) * sizeof(char) - 1);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			ptr[aux] = av[i][j];
			aux++;
			j++;
		}
		ptr[aux] = '\n';
		aux++;
	}
	return (ptr);
}
