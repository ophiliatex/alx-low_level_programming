#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdarg.h>

#define BUFF_SIZE 1024

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int open_from(char *file);
int open_to(char *file);
void copy_file(int fd_from, int fd_to);
void print_error(char *msg, ...);
void check_file_args(int argc, char *argv[]);
int open_ELF(char *file);
Elf64_Ehdr *read_ELF_header(int fd);

#endif /* MAIN_H */
