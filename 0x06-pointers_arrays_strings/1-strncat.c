#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes from src to be used.
 *
 * Return: Pointer to the resulting string `dest`.
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;

/* Move the pointer to the end of the dest string */
while (*ptr != '\0')
ptr++;

/* Copy at most n bytes from src to the end of dest */
while (*src != '\0' && n > 0)
{
*ptr = *src;
ptr++;
src++;
n--;
}

/* Add the terminating null byte */
*ptr = '\0';

return (dest);
}
