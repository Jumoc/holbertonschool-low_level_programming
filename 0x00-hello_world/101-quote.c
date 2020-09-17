#include <stdio.h>
/**
 * main - main function
 * Desciption: prints a string
 * Return: 0
 */
int main(void)
{
	char text[59]  = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i = 0;
	while(i < sizeof(text))
	{
		putchar(text[i]);
		i++;
	}
	return (1);
}
