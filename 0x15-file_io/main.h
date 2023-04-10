#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void copy_file(char *file_from, char *file_to);
void close_file(int fd);
int main(int argc, char **argv);
void print_ELFheader(char *filename);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_OSABI(unsigned char *e_ident);
void print_type(int e_type);


#endif
