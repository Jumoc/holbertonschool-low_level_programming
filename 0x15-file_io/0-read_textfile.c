#include "holberton.h"

/**
 * read_textfile - reads and prints the contents of a file
 * @filename: name of the file
 * @letters: amount of characters in the file
 *
 * Return: amount of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t readen;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(letters * sizeof(char) + 1);

	if (!buffer)
		return (0);

	readen = read(fd, buffer, letters);

	if (write(STDOUT_FILENO, buffer, readen) < readen)
		return (0);
	close(fd);

	return (readen);
}
