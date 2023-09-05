#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stddef.h>
#include <elf.h>
#include <string.h>

/* _putchar - writes a character to stdout */
int _putchar(char c);

/* read_textfile - reads a text file and prints it to stdout */
ssize_t read_textfile(const char *filename, size_t letters);

/* create_file - creates a file with the specified content and permissions */
int create_file(const char *filename, char *text_content);

/* append_text_to_file - appends text to the end of a file */
int append_text_to_file(const char *filename, char *text_content);

/* display_error_and_exit */
void display_error_and_exit(const char *error_message);

/* display_elf_header_info - displays information from the ELF header */
void display_elf_header_info(Elf64_Ehdr *elf_header);

/* prototypes for final */
void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

#endif /* MAIN_H */

