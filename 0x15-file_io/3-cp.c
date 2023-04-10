#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#define SIZE 1024
/**
 * main - a program that copies the content of a file to another file
 * @argc: number of argument
 * @argv: command lines
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int fd_to, fd_from;
	ssize_t n_read, n_written;
	char buffer[SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]), exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error, Can't write to %s\n", argv[2]);
		close_file(fd_from);
		exit(99);
	}
	while ((n_read = read(fd_from, buffer, SIZE)) > 0)
	{
		n_written = write(fd_to, buffer, n_read);
		if (n_written == -1 || n_written != n_read)
		{
			dprintf(STDERR_FILENO, "Error, Can't write to %s\n", argv[2]);
			close_file(fd_to);
			close_file(fd_from);
			exit(99);
		}
	}
	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		close_file(fd_to);
		close_file(fd_from);
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
