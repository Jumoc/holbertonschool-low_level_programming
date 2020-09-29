#include "holberton.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @s: string to be counted
 */

int _strlen(char *s)
{	
	int i = 0;
	
	while(s[i] != '\0')
	{
		i++;
	}

	return(i);

}
