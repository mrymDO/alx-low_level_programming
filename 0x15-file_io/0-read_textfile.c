#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * read_textfile - Reads a text file and prints to the POSIX standard output
 * @filename: pointer to a char (name of the text file to be read)
 * @letters: number of letters to read from the file and print
 * Return: number of letters it couls read  and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t count_read, count_written;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	count_read = read(fd, buffer, letters);
	if (count_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	count_written = write(STDOUT_FILENO, buffer, count_read);
	if (count_written == -1 || count_written != count_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (count_written);
}
