#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters) {
    int file_descriptor;
    char buffer[1024];
    ssize_t bytes_read, bytes_written, total_written = 0;

    if (filename == NULL)
        return 0;

    file_descriptor = open(filename, O_RDONLY);
    if (file_descriptor == -1)
        return 0;

    while ((bytes_read = read(file_descriptor, buffer, sizeof(buffer))) > 0) {
        if (letters < (size_t)bytes_read)
            bytes_read = letters;

        bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
        if (bytes_written == -1 || bytes_written != bytes_read) {
            close(file_descriptor);
            return 0;
        }

        letters -= bytes_written;
        total_written += bytes_written;

        if (letters == 0)
            break;
    }

    close(file_descriptor);
    return total_written;
}

