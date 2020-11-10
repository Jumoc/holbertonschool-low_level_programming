#include "holberton.h"
#include <stdio.h>

/**
 * copy_files - copies text from one file to another
 * @file1: src
 * @file2: dest
 * @buffer: buffer
 *
 * Return: 1 on success -1 otherwise
 */
int copy_files(int file1, int file2, char *buffer)
{
	while (read(file1, buffer, 1024) > 0)
	{
		if (write(file2, buffer, 1024) < 0)
		{
			return (-1);
		}
	}

	if (close(file1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1);
		exit(100);
	}
	if (close(file2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2);
		exit(100);
	}

	return (1);

}

/**
 * main - copies text from one file to another
 * @argv: number of arguments
 * @argc: arguments
 *
 * Return: 1 on success
 */
int main(int argv, char **argc)
{
	int fd1, fd2;
	char *buffer;

	if (argv != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argc[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argc[1]);
		exit(98);
	}

	fd2 = open(argc[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argc[2]);
		exit(99);
	}

	buffer = malloc(1024 * sizeof(char));
	if (!buffer)
		exit(-1);

	if (copy_files(fd1, fd2, buffer) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argc[2]);
		free(buffer);
		exit(99);
	}

	free(buffer);

	return (1);
}
