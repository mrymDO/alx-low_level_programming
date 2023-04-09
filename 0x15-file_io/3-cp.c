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
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	copy_file(argv[1], argv[2]);

	return (0);
}
/**
 * copy_file - copies the content of a file to another file
 * @file_from: the file to copy from
 * @file_to: the file destination
 * Return: 0 on success
 */
int copy_file(char *file_from, char *file_to)
{
	int fd_to, fd_from, close_check;
	char buffer[SIZE];
	ssize_t n_read, n_written;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error, Can't write to file %s\n", file_to);
		close(fd_from);
		exit(99);
	}
	while ((n_read = read(fd_from, buffer, SIZE)) > 0)
	{
		n_written = write(fd_to, buffer, n_read);
		if (n_written == -1 || n_written != n_read)
		{
			dprintf(STDERR_FILENO, "Error, Can't write to file %s\n", file_to);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", file_from);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
	close_check = close(fd_from);
	if (close_check == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd_from);
		exit(100);
	}
	close_check = close(fd_to);
	if (close_check == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
