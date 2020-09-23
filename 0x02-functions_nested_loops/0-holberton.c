#include <unistd.h>

int _putchar(char);

/**
 * main - main function
 *
 * Return: On success 1.
 */

int main(void)
{

	char name[10] = "Holberton\n";
	int i = 0;

	while(i < 10)
	{
		_putchar(name[i]);
		i++;
	}

	return (0);
}
