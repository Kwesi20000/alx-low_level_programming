#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to be copied.
 *
 * Return: Pointer to the resulting string `dest`.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

/* Copy at most n characters from src to dest */
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

/* If n is greater than the length of src, pad dest with null bytes */
for (; i < n; i++)
dest[i] = '\0';

return dest;
}
