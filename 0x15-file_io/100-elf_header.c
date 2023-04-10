#include "main.h"
#include <elf.h>
#include <fcntl.h>
#include <elf.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - displays the information contained in the ELF header
 * @argc: number of argument
 * @argv: pointer to arguments
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s ELF file\n", argv[0]);
		exit(98);
	}
	print_ELFheader(argv[1]);
	return (0);
}
/**
 * print_ELFheader - print ELF header
 * @filename: pointer to a string which is name of file
 * Return: void
 */
void print_ELFheader(char *filename)
{
	int fd;
	Elf64_Ehdr ehdr;
	off_t new_offset;
	ssize_t n_read;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "opening file %s failed\n", filename);
		exit(98);
	}

	new_offset = lseek(fd, 0, SEEK_SET);
	if (new_offset == -1)
	{
		close(fd);
		dprintf(STDERR_FILENO, "Not set at the beginning of %s\n", filename);
		exit(98);
	}
	n_read = read(fd, &ehdr, sizeof(ehdr));
	if (n_read == -1)
	{
		close(fd);
		dprintf(STDERR_FILENO, "Error can't read %s\n", filename);
		exit(98);
	}

	if (ehdr.e_ident[EI_MAG0] != ELFMAG0 ||
		ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
		ehdr.e_ident[EI_MAG2] != ELFMAG2 ||
		ehdr.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "%s is not an ELF file\n", filename);
		exit(98);
	}

	printf("ELF Header:\n");
	print_magic(ehdr.e_ident);
	print_class(ehdr.e_ident);
	print_data(ehdr.e_ident);
	printf(" Version:                         %d (current)\n", ehdr.e_ident[EI_VERSION]);
	print_OSABI(ehdr.e_ident);
	printf(" ABI Version:                      %d\n", ehdr.e_ident[EI_ABIVERSION]);
	print_type(ehdr.e_type);
	printf(" Entry point address:             0x%lx\n", ehdr.e_entry);

	close(fd);
}
/**
 * print_magic - prints ELF header magic
 * @e_ident: array of bytes represents ELF identification field
 * Return: void
 */
void print_magic(unsigned char *e_ident)
{
	int i;

	printf(" Magic:  ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", e_ident[i]);
	}
	printf("\n");
}
/**
 * print_class - prints ELF header class
 * @e_ident: array of bytes represents ELF identification field
 * Return: void
 */
void print_class(unsigned char *e_ident)
{
	printf(" Class:                            ");
	if (e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("ELF32\n");
}
/**
 * print_data - prints ELF header data
 * @e_ident: array of bytes represents ELF identification field
 * Return: void
 */
void print_data(unsigned char *e_ident)
{
	printf(" Data:                             ");
	if (e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else
		printf("2's complement, big endian\n");
}
/**
 * print_OSABI - prints OS/ABI ELF header
 * @e_ident: array of bytes represents ELF identification field
 * Return: void
 */
void print_OSABI(unsigned char *e_ident)
{
	printf(" OS/ABI:                           ");
	if (e_ident[EI_OSABI] == ELFOSABI_SYSV)
		printf("UNIX - System V\n");
	else
		printf("Uknown\n");
}
/**
 * print_type - prints type ELF header
 * e_type: purpose of the file
 * Return: void
 */
void print_type(int e_type)
{
	printf(" Type:                            \n");
	if (e_type == ET_EXEC)
		printf("EXEC (Executable file)\n");
	else if (e_type == ET_CORE)
		printf("CORE (Core file)\n");
	else if (e_type == ET_DYN)
		printf("DYN (Shared object file)\n");
	else if (e_type == ET_REL)
		printf("REL (Relocatable file)\n");
}
