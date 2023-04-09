#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int copy_file(char *file_from, char *file_to);
int close_file(int fd, char *filename);

#endif
