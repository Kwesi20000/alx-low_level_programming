#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file to append to.
 * @text_content: The content to add to the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, write_status;
ssize_t text_length = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
while (text_content[text_length] != '\0')
text_length++;
}

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
write_status = write(fd, text_content, text_length);
if (write_status == -1 || write_status != text_length)
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}

