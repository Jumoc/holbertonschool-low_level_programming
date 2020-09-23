int _putchar(char);

/**
 * main - main function
 *
 * Return: On success 0.
 */

int main(void)
{
	char name[10] = "Holberton\n";
	int i = 0;

	while (i < 10)
	{
		_putchar(name[i]);
		i++;
	}

	return (0);
}

