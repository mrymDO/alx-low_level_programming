#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that copies the content of a file to another file
 * @argc: number of argument
 * @argv: command lines
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int fd_to, fd_from;
	char buffer[1024];
	ssize_t n_read;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, S_IRUSR |
			S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error, Can't write to file %s\n", argv[2]);
		exit(99);
	}
	while ((n_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		if (write(fd_to, buffer, n_read) != n_read)
		{
			dprintf(STDERR_FILENO, "Error, Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}
	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_file(fd_to);
	close_file(fd_from);
	return (0);
}
/**
 * close_file - close file descriptor and checks for error
 * @fd: file descriptor
 * Return: void
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
}
