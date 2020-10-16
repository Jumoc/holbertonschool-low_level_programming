#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

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
 * string_nconcat - allocates memory
 *
 * @s1: size of the array
 * @s2: size of the array
 * @n: size of the array
 *
 * Return: pointer to the allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int sizeS1 = 0, sizeS2 = 0, i, j;
	char *ptr;

    if (s1 ==  NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";
    
    sizeS1 = sizePtr(s1);
    sizeS2 = sizePtr(s2);


    if (n > sizeS2)
        n = sizeS2;

    ptr = malloc(((sizeS1 + n) + 1) * sizeof(char));

    if (ptr == NULL)
        free(ptr);
        return (NULL);

    for (i = 0; i < sizeS1; i++)
    {
        ptr[i] = s1[i];
    }

    for (j = i; j < (sizeS1 + n); j++)
    {
        ptr[j] = s2[j - i];
    }

    ptr[j] = '\0';

    return (ptr);

}
