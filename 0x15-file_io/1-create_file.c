#include "holberton.h"

/**
 * _strlen - function that obtain the length of buffer
 * @buffer: pointer contain digits
 * Return: size of buffer
 */
int _strlen(char *buffer)
{
	int size = 0;

	while (buffer[size] != '\0')
	{
		size++;
	}
	return (size);
}

/**
 * create_file - creates a files and puts text in it
 * @filename: name of the file
 * @text_content: text that the file is going to contain
 *
 * Return: amount of characters printed
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int size;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		size = _strlen(text_content);
		if (write(fd, text_content, size) < size)
			return (-1);
	}
	close(fd);
	return (1);
}
