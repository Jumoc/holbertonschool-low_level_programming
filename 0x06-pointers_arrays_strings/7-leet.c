#include "holberton.h"

/**
 * *leet - changes some letters in the string to make it look 1337
 *
 * @s: string to be changed
 *
 * Return: the proccesed string
 */

char *leet(char *s)
{
	int i = 0, j;
	char ltLower[] = "aeotl";
	char ltUpper[] = "AEOTL";
	char ltNum[] = "43071";

	while (s[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (s[i] == ltLower[j] || s[i] == ltUpper[j])
			{
				s[i] = ltNum[j];
			}
			j++;
		}
		i++;
	}

	return (s);

}
