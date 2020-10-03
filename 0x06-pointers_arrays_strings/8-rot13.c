#include <stdio.h>
#include "holberton.h"

/**
 * *rot13 - applies rot13 letter substitution
 *
 * @s: string to be changed
 *
 * Return: the proccesed string
 */

char *rot13(char *s)
{
	int i = 0, j;
	char ltFirst[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ltLast[53] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i] != '\0')
	{
		j = 0;
		while (j < 52)
		{
			if (s[i] == ltFirst[j])
			{
				s[i] = ltLast[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (s);

}
