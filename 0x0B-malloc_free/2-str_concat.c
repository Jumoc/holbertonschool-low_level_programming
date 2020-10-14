#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sizePtr - returns the size of a pointer array
 *
 * @str: pointer array to be counter
 *
 * Return: size of the array
 */

int sizePtr(char *str)
{
	int size = 0;

	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}

/**
 * str_concat - creates a new ponter with two concatenated strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the new array
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	char *aux1, *aux2;
	int sizeS1, sizeS2, i, j;

	aux1 = "";
	aux2 = "";

	if (s1 == NULL)
		sizeS1 = sizePtr(aux1);
	else
		sizeS1 = sizePtr(s1);
	if (s2 == NULL)
		sizeS2 = sizePtr(aux2);
	else
		sizeS2 = sizePtr(s2);

	ptr = malloc(((sizeS1 + sizeS2) + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < sizeS1; i++)
	{
		if (s1 != NULL)
			ptr[i] = s1[i];
		else
			ptr[i] = aux1[i];
	}

	j = 0;
	for (i = sizeS1; i < (sizeS1 + sizeS2 + 1); i++)
	{
		if (s2 != NULL)
			ptr[i] = s2[j];
		else
			ptr[i] = aux2[j];
		j++;
	}
	return (ptr);
}
