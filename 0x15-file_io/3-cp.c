#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

int open_source_file(const char *filename);
int open_target_file(const char *filename);
int close_files(int fd_from, int fd_to);
int copy_file_contents(int fd_from, int fd_to);

int main(int argc, char *argv[])
{
int fd_from, fd_to;
int exit_code = 0;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
return (97);
}

fd_from = open_source_file(argv[1]);
if (fd_from == -1)
return (98);

fd_to = open_target_file(argv[2]);
if (fd_to == -1)
{
close(fd_from);
return (99);
}

if (copy_file_contents(fd_from, fd_to) == -1)
exit_code = 99;

if (close_files(fd_from, fd_to) == -1)
return (100);

return (exit_code);
}

/**
 * open_source_file - Opens the source file for reading.
 * @filename: The name of the source file.
 * Return: The file descriptor, or -1 on failure.
 */
int open_source_file(const char *filename)
{
int fd = open(filename, O_RDONLY);
if (fd == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
return (fd);
}

/**
 * open_target_file - Opens the target file for writing.
 * @filename: The name of the target file.
 * Return: The file descriptor, or -1 on failure.
 */
int open_target_file(const char *filename)
{
int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
return (fd);
}

/**
 * close_files - Closes two file descriptors.
 * @fd_from: The file descriptor for the source file.
 * @fd_to: The file descriptor for the target file.
 * Return: 0 on success, or -1 on failure.
 */
int close_files(int fd_from, int fd_to)
{
int status = 0;
if (close(fd_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
status = -1;
}
if (close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
status = -1;
}
return (status);
}

/**
 * copy_file_contents - Copies the contents of one file to another.
 * @fd_from: The file descriptor of the source file.
 * @fd_to: The file descriptor of the target file.
 * Return: 0 on success, or -1 on failure.
 */
int copy_file_contents(int fd_from, int fd_to)
{
char buffer[1024];
ssize_t read_size, write_status;

while ((read_size = read(fd_from, buffer, 1024)) > 0)
{
write_status = write(fd_to, buffer, read_size);
if (write_status == -1 || write_status != read_size)
{
dprintf(STDERR_FILENO, "Error: Can't write to target file\n");
return (-1);
}
}

if (read_size == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from source file\n");
return (-1);
}

return (0);
}

