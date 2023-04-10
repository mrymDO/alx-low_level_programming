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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[1], argv[2]);

	return (0);
}
/**
 * copy_file - copies the content of a file to another file
 * @file_from: the file to copy from
 * @file_to: the file destination
 * Return: void
 */
void copy_file(char *file_from, char *file_to)
{
	int fd_to, fd_from;
	char buffer[SIZE];
	ssize_t n_read;

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR |
			S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", file_from);
		exit(98);
	}

	if (fd_to == -1)
	{
		close(fd_from);
		dprintf(STDERR_FILENO, "Error, Can't write to file %s\n", file_to);
		exit(99);
	}

	while ((n_read = read(fd_from, buffer, SIZE)) > 0)
	{
		if (write(fd_to, buffer, n_read) != n_read)
		{
			dprintf(STDERR_FILENO, "Error, Can't write to file %s\n", file_to);
			exit(99);
		}
	}

	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", file_from);
		exit(98);
	}
	close_file(fd_from);
	close_file(fd_to);
}
/**
 * close_file - close file descriptor and checks for error
 * @fd: file descriptor
 * Return: void
 */
void close_file(int fd)
{
	int close_check;

	close_check = close(fd);
	if (close_check == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
}
