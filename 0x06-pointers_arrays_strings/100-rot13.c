#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The string to encode.
 *
 * Return: Pointer to the encoded string.
 */
char *rot13(char *str)
{
int i, j;
char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

/* Iterate through each character in the string */
for (i = 0; str[i] != '\0'; i++)
{
/* Check if the character is a letter */
if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
{
/* Iterate through each letter in the letters array */
for (j = 0; j < 52; j++)
{
/* Check if the current character matches a letter */
if (str[i] == letters[j])
{
/* Replace the letter with the corresponding ROT13 character */
str[i] = rot13[j];
break;
}
}
}
}

return (str);
}
